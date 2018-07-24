:- module(conn, [
    connect_db/2
]).

% Format Options in a list with two list
formatOptions(Options, FormattedOptions):-
    isDict(Options),
    

% Unify a terms that are options to a connection with the Postgres database.
connect_db(Conn, Options):-
    formatOptions(Options, FormattedOptions),
    verifyOptions(FormattedOptions),
    stablishConnection(Conn, FormattedOptions).