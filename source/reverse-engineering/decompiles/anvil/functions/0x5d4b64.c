// rea decompile_all
// name: FUN_005d4b64
// address: 0x5d4b64
// body: available
// range: 0x5d4b64-0x5d4bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d4b64(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  char cVar5;

  if (param_2 == 0) {
    cVar5 = *(char *)(param_1 + 7);
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    cVar5 = *(char *)(param_1 + 8);
    bVar1 = *(byte *)(param_1 + 6);
  }
  if (cVar5 == '\x01') {
    if ((byte)(bVar1 - 1) == 0) {
      uVar3 = 1;
    }
    else {
      iVar2 = (byte)(bVar1 - 1) - 1;
      bVar1 = (byte)iVar2;
      uVar4 = (undefined3)((uint)iVar2 >> 8);
      if (bVar1 < 3) {
        uVar3 = CONCAT31(uVar4,2);
      }
      else {
        if (8 < (byte)(bVar1 - 6)) {
          return CONCAT31(uVar4,8);
        }
        uVar3 = CONCAT31(uVar4,3);
      }
    }
  }
  else if (cVar5 == '\x03') {
    uVar4 = (undefined3)(bVar1 - 1 >> 8);
    if (4 < (byte)(bVar1 - 1)) {
      return CONCAT31(uVar4,6);
    }
    uVar3 = CONCAT31(uVar4,4);
  }
  else if (cVar5 == '\x04') {
    if (bVar1 < 8) {
      return 8;
    }
    uVar3 = 7;
  }
  else {
    uVar3 = 8;
  }
  return uVar3;
}
