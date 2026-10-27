// rea decompile_all
// name: FUN_00561850
// address: 0x561850
// body: available
// range: 0x561850-0x5618ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x561868 (push 0x5618ef followed by fs-segment stack chaining); handler 0x5618ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561850(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_005618ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_3 + -0x24))(param_3,&local_c);
  FUN_00408678(&local_8,&PTR_DAT_00561908,local_c);
  FUN_00561704(local_8);
  FUN_00561704(L"Stack Trace");
  piVar2 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_0055fcb8(piVar2,1,1,1,1);
  (**(code **)(*piVar2 + 0x1c))(piVar2,&local_10);
  FUN_00561704(local_10);
  FUN_004ebd58(*(undefined4 *)PTR_DAT_0068917c,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005618f6;
  puStack_20 = (undefined1 *)0x5618ee;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
