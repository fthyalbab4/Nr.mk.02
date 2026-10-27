// rea decompile_all
// name: FUN_0065ad24
// address: 0x65ad24
// body: available
// range: 0x65ad24-0x65add2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65ad4b (push 0x65add3 followed by fs-segment stack chaining); handler 0x65add3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065ad24(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x65ad3c;
  FUN_0065a870(param_1);
  bVar1 = false;
  puStack_20 = &LAB_0065add3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar4 = FUN_0065b2bc(param_1);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      iVar5 = FUN_0065b2a8(param_1,iVar4);
      if (*(short *)(iVar5 + 0x4a) != 0) {
        bVar1 = true;
        uVar6 = FUN_0065b2a8(param_1,iVar4);
        FUN_0065a634(uVar6,param_2,param_3);
        if (*(char *)(param_1 + 0x3c) != '\0') break;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0065adda;
  if (!bVar1) {
    puStack_20 = (undefined1 *)0x65adb7;
    cVar3 = FUN_00405c98(param_3,&PTR_LAB_00411290,puVar2);
    if (cVar3 == '\0') {
      puStack_20 = (undefined1 *)0x65adca;
      FUN_0051fd68(*(undefined4 *)PTR_DAT_00782280,param_3);
    }
  }
  puStack_20 = (undefined1 *)0x65add2;
  FUN_0065b254(param_1);
  return;
}
