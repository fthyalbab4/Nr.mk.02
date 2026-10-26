// rea decompile_all
// name: FUN_0056f840
// address: 0x56f840
// body: available
// range: 0x56f840-0x56f984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56f860 (push 0x56f985 followed by fs-segment stack chaining); handler 0x56f985 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f840(int *param_1,int param_2,int param_3,char param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20 [16];
  int local_10;
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  puStack_38 = &LAB_0056f985;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_3;
  if ((((param_2 < 0) || (param_3 < 0)) || (param_1[0xa1] <= param_2)) ||
     (puVar1 = &stack0xfffffffc, param_1[0xb0] <= param_3)) {
    FUN_0040b75c(PTR_PTR_00782338,&local_24);
    FUN_0056b460(local_24);
    puVar1 = puStack_34;
  }
  puStack_34 = puVar1;
  cVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_2,local_8);
  if (cVar2 != '\0') {
    FUN_00571648(param_1,local_20);
    local_10 = param_1[0xa2];
    local_c = param_1[0xa3];
    param_1[0xa2] = param_2;
    param_1[0xa3] = local_8;
    if ((*(byte *)((int)param_1 + 0x2b5) & 0x20) == 0) {
      FUN_0056c994(param_1);
    }
    if ((param_5 != '\0') || ((*(byte *)(param_1 + 0xad) & 0x10) == 0)) {
      param_1[0x9e] = param_1[0xa2];
      param_1[0x9f] = param_1[0xa3];
      if ((*(byte *)((int)param_1 + 0x2b5) & 0x10) != 0) {
        param_1[0x9e] = param_1[0xa1] + -1;
      }
    }
    if ((*(byte *)((int)param_1 + 0x2b5) & 0x10) != 0) {
      param_1[0xa2] = param_1[0xa7];
    }
    if (param_4 != '\0') {
      FUN_0056e648(param_1,param_1 + 0xa2);
    }
    FUN_0056fa0c(param_1,local_20);
    FUN_0056f0fc(param_1,local_10,local_c);
    FUN_0056f0fc(param_1,param_2,local_8);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0056f98c;
  puStack_38 = (undefined1 *)0x56f984;
  thunk_FUN_00406e5c(&local_24,uStack_3c,puVar1);
  return;
}
