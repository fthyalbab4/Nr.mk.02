// rea decompile_all
// name: FUN_00676db0
// address: 0x676db0
// body: available
// range: 0x676db0-0x676e56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676db0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_14 = param_4;
  local_18 = param_3;
  local_8 = param_2;
  uVar1 = FUN_006763bc(param_1,&local_18,param_3,param_4);
  iVar2 = FUN_00675394(param_1,uVar1,param_3,param_4);
  iVar3 = FUN_00674d58(local_8);
  if (iVar3 != 0) {
    iVar3 = FUN_00674d58(local_8);
    if (-1 < iVar3 + -1) {
      local_c = 0;
      do {
        uVar1 = FUN_0067236c(*(undefined4 *)(param_1 + 0x278));
        local_10 = FUN_0043cf44(uVar1,iVar2);
        uVar1 = FUN_00674d24(local_8,local_c);
        uVar4 = FUN_0067236c(*(undefined4 *)(param_1 + 0x278));
        uVar4 = FUN_00672cc0(uVar4,iVar2);
        FUN_00674340(uVar4,uVar1);
        iVar2 = FUN_0043c914(local_10);
        iVar2 = iVar2 + 1;
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
