// rea decompile_all
// name: FUN_00437ff4
// address: 0x437ff4
// body: available
// range: 0x437ff4-0x43807e inclusive
// range: 0x438086-0x43808f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x438026 (push 0x43807f followed by fs-segment stack chaining); handler 0x43807f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCRITICAL_SECTION FUN_00437ff4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION p_Var2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;

  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_0068ef70 + 8));
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar4);
      p_Var2 = (LPCRITICAL_SECTION)FUN_004375e8(uVar1,param_2);
      if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
        FUN_00406ba8();
        return p_Var2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStackY_2c;
  p_Var2 = (LPCRITICAL_SECTION)(DAT_0068ef70 + 8);
  uStackY_2c = 0x43807e;
  LeaveCriticalSection(p_Var2);
  return p_Var2;
}
