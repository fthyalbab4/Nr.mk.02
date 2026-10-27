// rea decompile_all
// name: FUN_0047d648
// address: 0x47d648
// body: available
// range: 0x47d648-0x47d6d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47d65f (push 0x47d6d5 followed by fs-segment stack chaining); handler 0x47d6d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047d648(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0047d6d5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (param_1[0x6c] != 0) {
    cVar3 = (**(code **)(*param_1 + 0x5c))();
    puVar2 = puStack_18;
    if ((cVar3 != '\0') && (*(char *)((int)param_1 + 0x1c6) != '\0')) {
      FUN_004ee6a0(param_1,&local_8);
      cVar3 = FUN_005136cc(*(undefined2 *)(param_2 + 4),local_8);
      puVar2 = puStack_18;
      if (cVar3 != '\0') {
        piVar1 = (int *)param_1[0x6c];
        cVar3 = FUN_00405d08(piVar1);
        puVar2 = puStack_18;
        if (cVar3 != '\0') {
          (**(code **)(*piVar1 + 0xe8))();
          *(undefined4 *)(param_2 + 0xc) = 1;
          puVar2 = puStack_18;
        }
      }
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047d6dc;
  puStack_1c = (undefined1 *)0x47d6d4;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
