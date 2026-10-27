// rea decompile_all
// name: FUN_00459ec8
// address: 0x459ec8
// body: available
// range: 0x459ec8-0x459faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x459f02 (push 0x459fb0 followed by fs-segment stack chaining); handler 0x459fb0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459ec8(int param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined4 *local_c;

  sVar2 = FUN_00459e3c(param_2,*(undefined2 *)(param_1 + 0x20));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if (sVar2 == *(short *)(local_c + 3)) {
      cVar1 = FUN_00415890(local_c + 4,param_2,*(undefined2 *)(param_1 + 0x20));
      if (cVar1 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_0040431c(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *param_2;
    *(short *)(local_c + 3) = sVar2;
    FUN_0040450c(param_2,local_c + 4,*(undefined2 *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStackY_28;
  uStackY_28 = 0x459faf;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
