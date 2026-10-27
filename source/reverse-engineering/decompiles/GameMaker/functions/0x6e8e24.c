// rea decompile_all
// name: FUN_006e8e24
// address: 0x6e8e24
// body: available
// range: 0x6e8e24-0x6e8ef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e8e24(int param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;

  uVar1 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar4 = 0;
    local_14 = param_2;
    do {
      uVar2 = FUN_006e663c(param_1,iVar4 % *(int *)(param_1 + 4));
      uVar2 = FUN_00701cf4(&DAT_00700d94,1,uVar2);
      if (param_4 == '\0') {
        FUN_005b0374(uVar2,param_3);
      }
      else {
        FUN_005b03d4(uVar2,param_3);
      }
      uVar3 = FUN_006e663c(param_1,iVar4 % *(int *)(param_1 + 4));
      FUN_006e6aa0(uVar1,uVar3);
      uVar3 = FUN_006e663c(uVar1,iVar4);
      FUN_005b1a94(uVar3,uVar2);
      FUN_00405a7c(uVar2);
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return uVar1;
}
