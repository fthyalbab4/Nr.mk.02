// rea decompile_all
// name: FUN_004060a4
// address: 0x4060a4
// body: available
// range: 0x4060a4-0x406163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4060c4 (push 0x406164 followed by fs-segment stack chaining); handler 0x406164 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004060a4(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00406164;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_3 = 0;
  local_c = param_2;
  iVar2 = FUN_00406174(*param_1,param_2);
  if (iVar2 == 0) {
    if (((*local_c == DAT_0067c04c) && (local_c[3] == DAT_0067c058)) && (local_c[2] == DAT_0067c054)
       ) {
      *param_3 = (int)param_1;
    }
  }
  else if (*(int *)(iVar2 + 0x14) == 0) {
    FUN_00406068(param_1,*(undefined4 *)(iVar2 + 0x18),&local_10);
    FUN_0040b280(param_3,local_10);
  }
  else {
    *param_3 = (int)param_1 + *(int *)(iVar2 + 0x14);
    if (*param_3 != 0) {
      (**(code **)(*(int *)*param_3 + 4))();
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0040616b;
  puStack_24 = (undefined1 *)0x406163;
  FUN_0040b268(&local_10,uStack_28,puVar1);
  return;
}
