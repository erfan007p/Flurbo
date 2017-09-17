Flurbo Core integration/staging tree
=====================================

[![Build Status](https://travis-ci.org/Flurbos/flurbo.svg?branch=master)](https://travis-ci.org/Flurbos/flurbo)

https://tba.org

What is Flurbo/Bitcoin?
----------------
Like Bitcoin, Flurbo is an experimental new digital currency that enables instant
payments to anyone, anywhere in the world. Flurbo uses peer-to-peer technology to
operate with no central authority: managing transactions and issuing money are carried
out collectively by the network. Flurbo Core is the name of open source software
which enables the use of this currency.

Flurbo has another goal in place, and that is to enable an idea that's been tossed around
this idea is: Fair gambling added as a standard transaction.
By fair gambling we will allow to users to both gamble x Bitcoins using the blockchain itself
thus achieving provably fair gambling with only costs involved being optional transaction fees.
This idea has been seen / discussed / proven at the following links;
*will add soon.

Flurbo's main goal however is to be for fun, do not expect your Bitcoin's to gain in value.
The main reason i made these was a desire to own some Flurbo's of my own, and maybe others share that desire.

~ 

Bitcoin is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Bitcoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Bitcoin Core is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the Bitcoin Core software, see https://flurbo.org/en/download, or read the
[original whitepaper](https://flurbocore.org/flurbo.pdf).

License
-------

Bitcoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/Flurbos/flurbo/tags) are created
regularly to indicate new official, stable release versions of Flurbo Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

// Will change -- The developer [mailing list](https://lists.linuxfoundation.org/mailman/listinfo/flurbo-dev)
// should be used to discuss complicated or controversial changes before working
// on a patch set.

// Developer IRC can be found on Freenode at #flurbo-core-dev.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](/doc/unit-tests.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows
and Linux, OS X, and that unit and sanity tests are automatically run.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
[Bitcoin Core's Transifex page](https://www.transifex.com/projects/p/flurbo/).

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.

Translators should also subscribe to the [mailing list](https://groups.google.com/forum/#!forum/flurbo-translators).
