// rea decompile_all
// name: FUN_0047fdbc
// address: 0x47fdbc
// body: available
// range: 0x47fdbc-0x47fe67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47fde2 (push 0x47fe68 followed by fs-segment stack chaining); handler 0x47fe68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fdbc(int param_1,int param_2,int *param_3,ushort param_4)

{
  undefined1 *puVar1;
  uint *in_FS_OFFSET;
  uint in_stack_ffffffc8;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  int iStack_c;
  int iStack_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = *param_3;
  local_10 = param_3[1];
  iStack_c = param_3[2];
  iStack_8 = param_3[3];
  puStack_2c = &LAB_0047fe68;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&puStack_30;
  FUN_004ecd50(*(undefined4 *)(param_1 + 0x270));
  if (*(short *)(param_1 + 0x2f2) == 0) {
    (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),&local_14);
    if (-1 < param_2) {
      (**(code **)(**(int **)(param_1 + 0x2ac) + 0xc))(*(int **)(param_1 + 0x2ac),param_2,&local_18)
      ;
      (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
                (*(int **)(param_1 + 0x270),local_14 + 2,local_10,local_18);
    }
  }
  else {
    in_stack_ffffffc8 = (uint)param_4;
    (**(code **)(param_1 + 0x2f0))
              (*(undefined4 *)(param_1 + 0x2f4),param_1,param_2,in_stack_ffffffc8,&local_14);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = in_stack_ffffffc8;
  puStack_30 = &LAB_0047fe6f;
  thunk_FUN_00406e5c(&local_18,in_stack_ffffffc8,puVar1);
  return;
}
