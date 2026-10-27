// rea decompile_all
// name: FUN_00570190
// address: 0x570190
// body: available
// range: 0x570190-0x57029f inclusive
// range: 0x5702d6-0x5702d9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57024a (push 0x5702a0 followed by fs-segment stack chaining); handler 0x5702a0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00570190(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_8c;
  undefined1 *puStackY_88;
  int local_58;

  if (*(char *)(param_1 + 0x2c4) != '\0') {
    cVar2 = FUN_004f7a54(param_1);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x1ea) != '\0')) {
      local_58 = FUN_004edf8c(param_1);
      FUN_004edfcc(param_1);
      puStackY_88 = (undefined1 *)0x5701e7;
      cVar2 = FUN_0056ff54(0);
      if (cVar2 != '\0') {
        puStackY_88 = (undefined1 *)0x5701f3;
        GetSystemMetrics(3);
      }
      puStackY_88 = (undefined1 *)0x570200;
      cVar2 = FUN_0056ff54(1);
      if (cVar2 != '\0') {
        puStackY_88 = (undefined1 *)0x57020c;
        iVar3 = GetSystemMetrics(2);
        local_58 = local_58 + iVar3;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x2c4);
      *(undefined1 *)(param_1 + 0x2c4) = 0;
      puStackY_88 = &LAB_005702a0;
      uStackY_8c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_8c;
      FUN_005700b8();
      FUN_004edfcc(param_1);
      FUN_0057014c();
      iVar3 = FUN_004edf8c(param_1);
      if (iVar3 != local_58) {
        FUN_004edf8c(param_1);
        FUN_005700b8();
      }
      *in_FS_OFFSET = uStackY_8c;
      *(undefined1 *)(param_1 + 0x2c4) = uVar1;
      return;
    }
  }
  return;
}
