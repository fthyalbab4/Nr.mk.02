// rea decompile_all
// name: FUN_005f8de0
// address: 0x5f8de0
// body: available
// range: 0x5f8de0-0x5f8ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8de0(int param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 *local_c;

  local_10 = param_3;
  if (param_3 < 0) {
    local_10 = *(int *)(param_1 + 0x20);
  }
  local_c = param_2;
  uVar1 = FUN_005e187c(param_4,0);
  if (0 < local_10) {
    FUN_005f8ad0(param_1,&local_10,uVar1);
    if (param_5 == '\0') {
      iVar2 = 0;
      iVar3 = FUN_00409a18(*local_c);
      if (iVar3 < local_10) {
        FUN_00409be0(local_c,&DAT_004108f8,1,local_10);
      }
    }
    else {
      iVar2 = FUN_00409a18(*local_c);
      iVar3 = local_10 + iVar2;
      if (SCARRY4(local_10,iVar2)) {
        iVar3 = FUN_00405944();
      }
      FUN_00409be0(local_c,&DAT_004108f8,1,iVar3);
    }
    if (param_4 < 0) {
      FUN_005e0648(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),local_c,local_10,
                   iVar2);
      FUN_005f9018(param_1,local_10);
    }
    else {
      FUN_005e0648(*(undefined4 *)(param_1 + 4),param_4,local_c,local_10,iVar2);
    }
  }
  return;
}
