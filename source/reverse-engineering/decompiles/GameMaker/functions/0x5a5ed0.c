// rea decompile_all
// name: FUN_005a5ed0
// address: 0x5a5ed0
// body: available
// range: 0x5a5ed0-0x5a5ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5ed0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;

  local_18 = FUN_00405a4c(&LAB_0052e8fc,1);
  if (-1 < *(int *)(param_2 + 8) + -1) {
    iVar4 = 0;
    local_14 = *(int *)(param_2 + 8);
    do {
      FUN_005a5dd0(&local_18,0);
      iVar2 = *(int *)(param_2 + 4);
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          FUN_005a5dd0(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + 2 + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4))
          ;
          FUN_005a5dd0(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + 1 + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4))
          ;
          FUN_005a5dd0(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4));
          FUN_005a5dd0(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + 3 + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4))
          ;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_1c = (undefined4 *)FUN_00405a4c(&LAB_0052e8fc,1);
  FUN_005a5de4(&local_1c,0x49444154);
  FUN_005a5d8c(&local_1c,&local_18);
  iVar4 = (**(code **)*local_1c)();
  FUN_005a5de4(param_1,iVar4 + -4);
  FUN_005a5d48(param_1,&local_1c);
  uVar1 = FUN_005a5d08(local_1c);
  FUN_005a5de4(param_1,uVar1);
  FUN_00405a7c(local_18);
  FUN_00405a7c(local_1c);
  return;
}
