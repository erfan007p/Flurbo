Shared Libraries
================

## flurboconsensus

The purpose of this library is to make the verification functionality that is critical to Flurbo's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `flurboconsensus.h` located in  `src/script/flurboconsensus.h`.

#### Version

`flurboconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`flurboconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `flurboconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `flurboconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `flurboconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/flurbo/bips/blob/master/bip-0016.mediawiki)) subscripts
- `flurboconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/flurbo/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `flurboconsensus_ERR_OK` - No errors with input parameters *(see the return value of `flurboconsensus_verify_script` for the verification status)*
- `flurboconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `flurboconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `flurboconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NFlurbo](https://github.com/NicolasDorier/NFlurbo/blob/master/NFlurbo/Script.cs#L814) (.NET Bindings)
- [node-libflurboconsensus](https://github.com/bitpay/node-libflurboconsensus) (Node.js Bindings)
- [java-libflurboconsensus](https://github.com/dexX7/java-libflurboconsensus) (Java Bindings)
- [flurboconsensus-php](https://github.com/Bit-Wasp/flurboconsensus-php) (PHP Bindings)
