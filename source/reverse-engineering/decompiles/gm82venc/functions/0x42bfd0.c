// rea decompile_all
// name: FUN_0042bfd0
// address: 0x42bfd0
// body: available
// range: 0x42bfd0-0x42c091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42bff5 (push 0x42c092 followed by fs-segment stack chaining); handler 0x42c092 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bfd0(char *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x42bfea;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_1c = &LAB_0042c092;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0042ba48(param_1);
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    puStack_24 = (undefined4 *)0x42c01b;
    FUN_00416600(local_8);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\t')) {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    puStack_24 = &local_c;
    FUN_00408984(local_8,2,iVar4 + -1);
    FUN_00416600(local_c);
  }
  else {
    puStack_24 = (undefined4 *)0x42c075;
    FUN_0042bc38(param_1,local_8);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = (int)puStack_24;
  puStack_1c = &LAB_0042c099;
  iStack_20 = 0x42c091;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
