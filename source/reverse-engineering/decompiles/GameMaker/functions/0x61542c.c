// rea decompile_all
// name: FUN_0061542c
// address: 0x61542c
// body: available
// range: 0x61542c-0x6154d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x615456 (push 0x6154d4 followed by fs-segment stack chaining); handler 0x6154d4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061542c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  undefined4 local_8;

  local_18 = 0;
  puStack_28 = (undefined1 *)0x61544b;
  local_14 = param_3;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_006154d4;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar3 = (**(code **)(**(int **)(local_c + 0xc) + 0x14))();
  if (SBORROW4(iVar3,1)) {
    FUN_00405944();
  }
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      (**(code **)(**(int **)(local_c + 0xc) + 0xc))(*(int **)(local_c + 0xc),iVar4,&local_18);
      cVar2 = FUN_005e3958(local_18,local_8);
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(local_c + 0xc) + 0xc))(*(int **)(local_c + 0xc),iVar4,local_14);
        goto LAB_006154b6;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00407eb8(local_14,0);
LAB_006154b6:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006154db;
  puStack_2c = (undefined1 *)0x6154cb;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x6154d3;
  thunk_FUN_00406e5c(&local_8);
  return;
}
