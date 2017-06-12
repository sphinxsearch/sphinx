Sphinx is a full-text search engine, publicly distributed under GPL version 2. Commercial licensing (eg. for embedded use) is available upon request.

Technically, Sphinx is a standalone software package provides fast and relevant full-text search functionality to client applications. It was specially designed to integrate well with SQL databases storing the data, and to be easily accessed by scripting languages. However, Sphinx does not depend on nor require any specific database to function.

Applications can access Sphinx search daemon (searchd) using any of the three different access methods: a) via Sphinx own implementation of MySQL network protocol (using a small SQL subset called SphinxQL, this is recommended way), b) via native search API (SphinxAPI) or c) via MySQL server with a pluggable storage engine (SphinxSE).

Official native SphinxAPI implementations for PHP, Perl, Python, Ruby and Java are included within the distribution package. API is very lightweight so porting it to a new language is known to take a few hours or days. Third party API ports and plugins exist for Perl, C#, Haskell, Ruby-on-Rails, and possibly other languages and frameworks.

Starting from version 1.10-beta, Sphinx supports two different indexing backends: "disk" index backend, and "realtime" (RT) index backend. Disk indexes support online full-text index rebuilds, but online updates can only be done on non-text (attribute) data. RT indexes additionally allow for online full-text index updates. Previous versions only supported disk indexes.

Data can be loaded into disk indexes using a so-called data source. Built-in sources can fetch data directly from MySQL, PostgreSQL, MSSQL, ODBC compliant database (Oracle, etc) or a pipe in TSV or a custom XML format. Adding new data sources drivers (eg. to natively support other DBMSes) is designed to be as easy as possible. RT indexes, as of 1.10-beta, can only be populated using SphinxQL.

As for the name, Sphinx is an acronym which is officially decoded as SQL Phrase Index. Yes, I know about CMU's Sphinx project.

http://sphinxsearch.com/docs/latest/about.html
