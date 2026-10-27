// rea decompile_all
// name: FUN_0062abec
// address: 0x62abec
// body: available
// range: 0x62abec-0x62aca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62ac28 (push 0x62aca4 followed by fs-segment stack chaining); handler 0x62aca4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062abec(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_24 [7];
  undefined4 local_8;

  puVar3 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_38 = (undefined1 *)0x62ac0f;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_38 = (undefined1 *)0x62ac1d;
  FUN_0040923c(local_24,&DAT_00615f70);
  puStack_3c = &LAB_0062aca4;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  if ((DAT_006887dc != 0) && (puStack_38 = &stack0xfffffffc, DAT_006887e0 != 0)) {
    puStack_38 = &stack0xfffffffc;
    FUN_0062a800();
    if (-1 < DAT_0088355c + -1) {
      iVar4 = 0;
      bVar5 = true;
      iVar2 = DAT_0088355c;
      do {
        FUN_0040891c(local_8,*(undefined4 *)(DAT_00883564 + iVar4 * 4));
        if (bVar5) {
          FUN_0062aa60(*(undefined4 *)(DAT_00883560 + iVar4 * 4),param_2,local_24);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
        bVar5 = iVar2 == 0;
      } while (!bVar5);
    }
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0062acab;
  puStack_3c = (undefined1 *)0x62ac9b;
  FUN_004090d0(local_24,&DAT_00615f70,puVar1);
  puStack_3c = (undefined1 *)0x62aca3;
  thunk_FUN_004072d8(&local_8);
  return;
}
