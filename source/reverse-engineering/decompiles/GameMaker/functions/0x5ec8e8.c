// rea decompile_all
// name: FUN_005ec8e8
// address: 0x5ec8e8
// body: available
// range: 0x5ec8e8-0x5ecd8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ec8e8(void)

{
  DAT_0077d8ec = &LAB_005e47cc;
  DAT_0077d8f0 = &LAB_005e48e0;
  DAT_0077d8f4 = &LAB_005e49f0;
  DAT_0077d8f8 = &LAB_005e4b04;
  DAT_0077d8fc = &LAB_005e4c18;
  DAT_0077d900 = &LAB_005e4d34;
  DAT_0077d904 = &LAB_005e4e50;
  DAT_0077d908 = &LAB_005e4f6c;
  DAT_0077d90c = &LAB_005e5090;
  DAT_0077d910 = &LAB_005e5198;
  DAT_0077d914 = &LAB_005e52a0;
  DAT_0077d918 = &LAB_005e53b0;
  DAT_0077d91c = &LAB_005e54bc;
  DAT_0077d920 = &LAB_005e55cc;
  DAT_0077d924 = &LAB_005e56d4;
  DAT_0077d928 = &LAB_005e57dc;
  DAT_0077d92c = &LAB_005e58f0;
  DAT_0077d930 = &LAB_005e5a14;
  DAT_0077d934 = &LAB_005e5b30;
  DAT_0077d938 = &LAB_005e5c44;
  DAT_0077d93c = &LAB_005e5d64;
  DAT_0077d940 = &LAB_005e5e88;
  DAT_0077d944 = &LAB_005e5f9c;
  DAT_0077d948 = &LAB_005e60b0;
  DAT_0077d94c = &LAB_005e61d0;
  DAT_0077d950 = &LAB_005e62e8;
  DAT_0077d954 = &LAB_005e6400;
  DAT_0077d958 = &LAB_005e651c;
  DAT_0077d95c = &LAB_005e6638;
  DAT_0077d960 = &LAB_005e6758;
  DAT_0077d99c = &LAB_005e78d0;
  DAT_0077da9c = &LAB_005ec450;
  DAT_0077daa8 = &LAB_005ec6a4;
  DAT_0077daac = &LAB_005ec708;
  DAT_0077da98 = &LAB_005ec3e4;
  DAT_0077dab4 = &LAB_005ec7c8;
  DAT_0077d9a0 = &LAB_005e79ec;
  DAT_0077d994 = &LAB_005e7680;
  DAT_0077d990 = &LAB_005e7540;
  DAT_0077d98c = &LAB_005e7408;
  DAT_0077d984 = &LAB_005e718c;
  DAT_0077d988 = &LAB_005e72c8;
  DAT_0077d97c = &LAB_005e6f14;
  DAT_0077d980 = &LAB_005e7050;
  DAT_0077d998 = &LAB_005e77a8;
  DAT_0077d9a4 = &LAB_005e9eac;
  DAT_0077d9a8 = &LAB_005e9fe0;
  DAT_0077d9ac = &LAB_005ea114;
  DAT_0077d978 = &LAB_005e6df4;
  DAT_0077d8e8 = &LAB_005e46c0;
  DAT_0077d9b0 = &LAB_005e7b0c;
  DAT_0077d9b4 = &LAB_005e7c24;
  DAT_0077d9b8 = &LAB_005e7d50;
  DAT_0077d9bc = &LAB_005e7e64;
  DAT_0077d9c0 = &LAB_005e7f90;
  DAT_0077d9c4 = &LAB_005e80bc;
  DAT_0077d9d8 = &LAB_005eb7c4;
  DAT_0077d9dc = &LAB_005eb8fc;
  DAT_0077d9e0 = &LAB_005eba34;
  DAT_0077d9c8 = &LAB_005e81e8;
  DAT_0077d9cc = &LAB_005e8318;
  DAT_0077d9d0 = &LAB_005e8440;
  DAT_0077d9d4 = &LAB_005e8568;
  DAT_0077d9e4 = &LAB_005e8690;
  DAT_0077d968 = &LAB_005e698c;
  DAT_0077d9e8 = &LAB_005e87b4;
  DAT_0077d9ec = &LAB_005e88f0;
  DAT_0077d9f0 = &LAB_005eb41c;
  DAT_0077d9f4 = &LAB_005eb554;
  DAT_0077d9f8 = &LAB_005eb68c;
  DAT_0077d9fc = &LAB_005ebb6c;
  DAT_0077da00 = &LAB_005ebcb4;
  DAT_0077da04 = &LAB_005ebdfc;
  DAT_0077da08 = &LAB_005e8a14;
  DAT_0077da0c = &LAB_005e8b2c;
  DAT_0077da14 = &LAB_005eaf70;
  DAT_0077da18 = &LAB_005eb09c;
  DAT_0077da1c = &LAB_005eb1c8;
  DAT_0077da10 = &LAB_005e8c44;
  DAT_0077d96c = &LAB_005e6aa0;
  DAT_0077da20 = &LAB_005e8d74;
  DAT_0077da24 = &LAB_005ea5e4;
  DAT_0077da28 = &LAB_005ea718;
  DAT_0077da2c = &LAB_005ea84c;
  DAT_0077da30 = &LAB_005ead1c;
  DAT_0077da34 = &LAB_005ea980;
  DAT_0077da38 = &LAB_005eaab4;
  DAT_0077da3c = &LAB_005eabe8;
  DAT_0077dac0 = &LAB_005eae40;
  DAT_0077da40 = &LAB_005e8ea4;
  DAT_0077da44 = &LAB_005e8fbc;
  DAT_0077dabc = &LAB_005ec898;
  DAT_0077da94 = &LAB_005ec2b0;
  DAT_0077da48 = &LAB_005e90d4;
  DAT_0077da4c = &LAB_005e91f8;
  _DAT_0077daa4 = &DAT_005ec504;
  DAT_0077da50 = &LAB_005e931c;
  DAT_0077dab0 = &LAB_005ec768;
  DAT_0077da54 = &LAB_005eb2f4;
  DAT_0077da58 = &LAB_005e9450;
  DAT_0077da5c = &LAB_005e9568;
  DAT_0077da60 = &LAB_005e968c;
  DAT_0077dab8 = &LAB_005ec834;
  DAT_0077da64 = &LAB_005e97b0;
  DAT_0077d974 = &LAB_005e6cd0;
  DAT_0077da68 = &LAB_005e98e0;
  DAT_0077d964 = &LAB_005e6874;
  DAT_0077da6c = &LAB_005ebf44;
  DAT_0077da70 = &LAB_005ec068;
  DAT_0077da74 = &LAB_005ec18c;
  DAT_0077da78 = &LAB_005e99f4;
  DAT_0077da7c = &LAB_005e9b1c;
  DAT_0077da80 = &LAB_005e9c44;
  DAT_0077d8e4 = &LAB_005e45a8;
  DAT_0077da84 = &LAB_005ea248;
  DAT_0077da88 = &LAB_005ea37c;
  DAT_0077da8c = &LAB_005ea4b0;
  DAT_0077d970 = &LAB_005e6bb0;
  DAT_0077da90 = &LAB_005e9d6c;
  return;
}
