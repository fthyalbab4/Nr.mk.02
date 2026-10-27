// rea decompile_all
// name: FUN_0041c918
// address: 0x41c918
// body: available
// range: 0x41c918-0x41c996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041c918(int *param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = *param_1;
  if (iVar1 < -0x3fffff6d) {
    if (iVar1 == -0x3fffff6e) {
LAB_0041c97c:
      return CONCAT31((int3)((uint)iVar1 >> 8),6);
    }
    if (iVar1 < -0x3fffff71) {
      if (iVar1 == -0x3fffff72) {
        return 0xc0000007;
      }
      if (iVar1 == -0x3ffffffb) {
        return 0xb;
      }
      if (iVar1 == -0x3fffff74) {
        return 4;
      }
      iVar1 = iVar1 + 0x3fffff73;
      if (iVar1 == 0) {
        return 9;
      }
    }
    else {
      uVar2 = iVar1 + 0x3fffff71;
      iVar1 = iVar1 + 0x3fffff6f;
      if (uVar2 < 2) goto LAB_0041c97c;
      if (iVar1 == 0) {
        return 8;
      }
    }
  }
  else if (iVar1 < -0x3fffff69) {
    if (iVar1 == -0x3fffff6a) {
      return 0xc000000c;
    }
    if (iVar1 == -0x3fffff6d) {
      return 9;
    }
    if (iVar1 == -0x3fffff6c) {
      return 3;
    }
    iVar1 = iVar1 + 0x3fffff6b;
    if (iVar1 == 0) {
      return 5;
    }
  }
  else {
    if (iVar1 == -0x3fffff03) {
      return 0xe;
    }
    iVar1 = iVar1 + 0x3ffffec6;
    if (iVar1 == 0) {
      return 0xd;
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),0x16);
}
