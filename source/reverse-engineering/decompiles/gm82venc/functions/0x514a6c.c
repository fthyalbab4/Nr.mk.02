// rea decompile_all
// name: FUN_00514a6c
// address: 0x514a6c
// body: available
// range: 0x514a6c-0x514b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514a6c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;

  local_18 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  if (-1 < *(int *)(param_2 + 8) + -1) {
    iVar4 = 0;
    local_14 = *(int *)(param_2 + 8);
    do {
      FUN_0051496c(&local_18,0);
      iVar2 = *(int *)(param_2 + 4);
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          FUN_0051496c(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + 2 + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4))
          ;
          FUN_0051496c(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + 1 + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4))
          ;
          FUN_0051496c(&local_18,
                       *(undefined1 *)
                        (*(int *)(param_2 + 0xc) + (iVar4 * *(int *)(param_2 + 4) + iVar3) * 4));
          FUN_0051496c(&local_18,
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
  local_1c = (undefined4 *)FUN_00405fac(&PTR_LAB_0050b4b8,1);
  FUN_00514980(&local_1c,0x49444154);
  FUN_00514928(&local_1c,&local_18);
  iVar4 = (**(code **)*local_1c)();
  FUN_00514980(param_1,iVar4 + -4);
  FUN_005148e4(param_1,&local_1c);
  uVar1 = FUN_005148a4(local_1c);
  FUN_00514980(param_1,uVar1);
  FUN_00405fdc(local_18);
  FUN_00405fdc(local_1c);
  return;
}
