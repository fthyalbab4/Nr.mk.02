// rea decompile_all
// name: FUN_0042b560
// address: 0x42b560
// body: available
// range: 0x42b560-0x42b607 inclusive
// range: 0x42b60f-0x42b618 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b5a6 (push 0x42b608 followed by fs-segment stack chaining); handler 0x42b608 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042b560(ushort param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_20;

  if (((DAT_0068ef38 == 0) || (param_1 < 0x100)) || (0x7ff < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
    uStackY_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_20;
    iVar2 = FUN_00409c34(DAT_0068ef38);
    if ((int)(param_1 - 0x100) < iVar2) {
      *param_2 = *(undefined4 *)(DAT_0068ef38 + -0x400 + (uint)param_1 * 4);
    }
    uVar3 = 0;
    *in_FS_OFFSET = uStackY_20;
    uStackY_20 = 0x42b607;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0068ef3c);
    return uVar3;
  }
  return 0;
}
