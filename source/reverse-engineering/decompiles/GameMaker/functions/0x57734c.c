// rea decompile_all
// name: FUN_0057734c
// address: 0x57734c
// body: available
// range: 0x57734c-0x5773fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57736e (push 0x5773fe followed by fs-segment stack chaining); handler 0x5773fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057734c(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;

  local_1c = &stack0xfffffffc;
  iVar3 = 5;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puStack_20 = &LAB_005773fe;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_28 = 0x57737b;
  FUN_0043d298(param_1,param_2);
  uStack_28 = 0x577388;
  cVar1 = FUN_00405c98(param_2,&PTR_FUN_00575418);
  if (cVar1 != '\0') {
    uStack_28 = 0x577397;
    iVar3 = (**(code **)(*param_1 + 0x14))();
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        uStack_28 = 0x5773ad;
        FUN_00429c10(&local_1c,iVar4,0xfc);
        uStack_28 = 0x5773ba;
        iVar2 = FUN_00577720(param_2,&local_1c,0);
        if (iVar2 != 0) {
          uStack_28 = 0x5773cc;
          FUN_00429c10(local_2c,iVar4,0xfc);
          uStack_28 = 0x5773d9;
          FUN_00577954(param_1,local_2c,iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *in_FS_OFFSET = uStack_24;
  local_1c = &LAB_00577405;
  puStack_20 = (undefined1 *)0x5773fd;
  FUN_00408e44(local_2c,&DAT_004012bc,2);
  return;
}
