// rea decompile_all
// name: FUN_0069639c
// address: 0x69639c
// body: available
// range: 0x69639c-0x696400 inclusive
// range: 0x696412-0x696447 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6963b1 (push 0x696448 followed by fs-segment stack chaining); handler 0x696448 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6963dc (push 0x696401 followed by fs-segment stack chaining); handler 0x696401 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069639c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00696448;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x6963bf;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0x40))();
  if (cVar2 != '\0') {
    puStack_24 = (undefined1 *)0x6963cf;
    piVar3 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    puStack_28 = &LAB_00696401;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x3b8),&local_8);
    (**(code **)(*piVar3 + 0x68))(piVar3,local_8);
    puVar1 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x69641d;
    piVar4 = (int *)FUN_00576014(*(undefined4 *)(param_1 + 0x38c),uStack_2c,puVar1);
    puStack_24 = (undefined1 *)0x696424;
    (**(code **)(*piVar4 + 0x40))(piVar4,piVar3);
    puStack_24 = (undefined1 *)0x69642b;
    FUN_00405a7c(piVar3);
    puStack_24 = (undefined1 *)0x696432;
    FUN_00695f2c(param_1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0069644f;
  puStack_1c = (undefined1 *)0x696447;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
