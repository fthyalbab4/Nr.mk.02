// rea decompile_all
// name: FUN_0064f120
// address: 0x64f120
// body: available
// range: 0x64f120-0x64f1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64f134 (push 0x64f1dc followed by fs-segment stack chaining); handler 0x64f1dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f120(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0064f1dc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (((-1 < param_1) && (puVar1 = &stack0xfffffffc, param_1 < DAT_0077f2ac)) &&
     (puVar1 = &stack0xfffffffc, *(char *)(DAT_0078a1ac + param_1 * 0x14) != '\0')) {
    uVar3 = *(int *)(DAT_0078a1ac + 4 + param_1 * 0x14) == 3;
    if ((bool)uVar3) {
      puStack_14 = &stack0xfffffffc;
      FUN_005ad644(DAT_0077f2b0,&local_8);
      FUN_00408640(local_8,*(undefined4 *)(DAT_0078a1ac + 0x10 + param_1 * 0x14));
      puVar1 = puStack_14;
      if ((bool)uVar3) {
        cVar2 = FUN_005ad734(DAT_0077f2b0);
        if (cVar2 == '\x02') {
          FUN_005ac88c(DAT_0077f2b0);
        }
        FUN_0048e1e4(DAT_0077f2b4,0);
        puVar1 = puStack_14;
      }
    }
    else {
      (**(code **)(*DAT_0077f2a4 + 0xb8))();
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0064f1e3;
  puStack_18 = (undefined1 *)0x64f1db;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
