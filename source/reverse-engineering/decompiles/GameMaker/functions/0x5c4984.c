// rea decompile_all
// name: FUN_005c4984
// address: 0x5c4984
// body: available
// range: 0x5c4984-0x5c4a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c499f (push 0x5c4a3d followed by fs-segment stack chaining); handler 0x5c4a3d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4984(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_005c4a3d;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_24;
  puVar6 = &local_c;
  FUN_004086a8(*param_1,1,0x32,puVar6,&local_8);
  FUN_005c4310(L"encoding",local_c,0);
  if (local_8 != 0) {
    cVar2 = FUN_005c4958(local_8,param_2,param_3);
    if (cVar2 == '\0') {
      iVar3 = FUN_00408a68(L"encoding",*param_1);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4);
      }
      FUN_00408778(param_1,iVar3 + -1,iVar5 + 0xc);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puVar6;
  puStack_24 = &LAB_005c4a44;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
