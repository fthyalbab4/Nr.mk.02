// rea decompile_all
// name: FUN_005c5164
// address: 0x5c5164
// body: available
// range: 0x5c5164-0x5c51e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c518b (push 0x5c51e8 followed by fs-segment stack chaining); handler 0x5c51e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5164(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;

  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  puStack_34 = &LAB_005c51e8;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  iVar4 = FUN_005c4f70(param_1);
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      FUN_005c5340(param_1,iVar6,&local_20);
      uVar2 = local_20;
      uVar5 = FUN_0040b140(local_c);
      cVar3 = FUN_0041ef90(uVar2,&local_1c,uVar5);
      if (cVar3 != '\0') goto LAB_005c51d2;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0040b140(local_c);
LAB_005c51d2:
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005c51ef;
  puStack_34 = (undefined1 *)0x5c51e7;
  FUN_0040b140(&local_20,uStack_38,puVar1);
  return;
}
