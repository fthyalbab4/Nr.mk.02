// rea decompile_all
// name: FUN_004ef4e0
// address: 0x4ef4e0
// body: available
// range: 0x4ef4e0-0x4ef5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef4e0(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = *(int *)(param_2 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  cVar2 = FUN_00405c98(uVar5,&PTR_FUN_004e03c0);
  if ((DAT_00788274 != '\0') && (cVar2 == '\0')) {
    iVar3 = FUN_00405cbc(uVar5,&LAB_004e0178);
    uVar5 = *(undefined4 *)(iVar3 + 0x40);
  }
  FUN_004ee1d0(param_1,iVar1,&local_18);
  if (*(byte *)(param_2 + 4) < 3) {
    local_1c[0] = 1;
    if (cVar2 == '\0') {
      uVar4 = (uint)*(byte *)(param_2 + 4);
      FUN_00405d08(param_1,uVar5,local_18,local_1c,uVar4,local_14);
    }
    else {
      uVar4 = (uint)*(byte *)(param_2 + 4);
      FUN_00405d08(*(undefined4 *)(iVar1 + 0xc),uVar5,local_18,local_1c,uVar4,local_14);
    }
    *(uint *)(param_2 + 0xc) = uVar4 & 0xff;
  }
  else if (*(byte *)(param_2 + 4) == 3) {
    if (cVar2 == '\0') {
      FUN_00405d08(param_1,uVar5,local_18,local_14);
    }
    else {
      FUN_00405d08(*(undefined4 *)(iVar1 + 0xc),uVar5,local_18,local_14);
    }
  }
  return;
}
