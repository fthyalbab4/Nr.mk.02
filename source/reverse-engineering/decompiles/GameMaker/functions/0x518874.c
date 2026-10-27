// rea decompile_all
// name: FUN_00518874
// address: 0x518874
// body: available
// range: 0x518874-0x518923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51888b (push 0x518924 followed by fs-segment stack chaining); handler 0x518924 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518874(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00518924;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 == *(int *)(param_1 + 0x290)) goto LAB_0051890e;
  puVar1 = &stack0xfffffffc;
  if ((param_2 == 0) || (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0x1c) & 0x10) != 0))
  goto LAB_005188e7;
  puVar1 = &stack0xfffffffc;
  if (param_1 == param_2) {
LAB_005188c6:
    puStack_18 = puVar1;
    FUN_0040b75c(PTR_PTR_0078266c,&local_8);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_8);
    FUN_00406618();
    puVar1 = puStack_18;
  }
  else {
    iVar3 = FUN_0051373c(param_2,1);
    puVar1 = puStack_18;
    if (param_1 != iVar3) goto LAB_005188c6;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      cVar2 = FUN_00405d08(param_2);
      puVar1 = puStack_18;
      if (cVar2 == '\0') goto LAB_005188c6;
    }
  }
LAB_005188e7:
  puStack_18 = puVar1;
  *(int *)(param_1 + 0x290) = param_2;
  puVar1 = puStack_18;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (*(char *)(param_1 + 0x29d) != '\0') {
      FUN_00518cac(param_1);
    }
    FUN_00405d08(param_1);
    puVar1 = puStack_18;
  }
LAB_0051890e:
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0051892b;
  puStack_1c = (undefined1 *)0x518923;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
