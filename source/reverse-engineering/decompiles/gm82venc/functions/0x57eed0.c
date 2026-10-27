// rea decompile_all
// name: FUN_0057eed0
// address: 0x57eed0
// body: available
// range: 0x57eed0-0x57f084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057eed0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;

  piVar4 = (int *)(param_4 + -4);
  uVar3 = param_1 & 0xff;
  if ((*(int *)(*piVar4 + 0x18) <= (int)uVar3) && ((int)uVar3 <= *(int *)(*piVar4 + 0x1c))) {
    if (*(int *)(*piVar4 + 0x20) < 0) {
      if (-1 < *(int *)(*piVar4 + 0x1830)) {
        FUN_00621c20(*(int *)(*piVar4 + 0x1830),*(undefined4 *)(param_4 + -0x1c),*piVar4,
                     *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                     (double)((_DAT_0057f088 * (float10)*(double *)(param_4 + 0x10)) /
                             (float10)180.0),*(undefined4 *)(param_4 + 0x18),
                     *(undefined4 *)(param_4 + 0x1c),*(undefined4 *)(param_4 + 0x20),
                     *(undefined4 *)(param_4 + 0x24),
                     *(double *)(param_4 + 0x28) -
                     (double)*(int *)(*piVar4 + 0x1424 + (param_1 & 0xff) * 4) *
                     *(double *)(param_4 + -0x18) * *(double *)(param_4 + 0x20),
                     (double)*(int *)(*piVar4 + 0x1424 + uVar3 * 4) * *(double *)(param_4 + -0x10) *
                     *(double *)(param_4 + 0x20) + *(double *)(param_4 + 0x30),
                     (double)*(int *)(*piVar4 + 0xc24 + uVar3 * 4),
                     (double)*(int *)(*piVar4 + 0x824 + uVar3 * 4),
                     (double)*(int *)(*piVar4 + 0x424 + uVar3 * 4),
                     (double)*(int *)(*piVar4 + 0x24 + uVar3 * 4));
      }
    }
    else {
      cVar1 = FUN_005798a4(*(undefined4 *)(*piVar4 + 0x20));
      if (cVar1 != '\0') {
        uVar2 = FUN_005799a0(*(undefined4 *)(*piVar4 + 0x20));
        *(undefined4 *)(param_4 + -8) = uVar2;
        FUN_00624b78(*(undefined4 *)(param_4 + -8),uVar3 - *(int *)(*piVar4 + 0x18),
                     *(undefined4 *)(param_4 + -0x1c),*(undefined4 *)(param_4 + 8),
                     *(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10),
                     *(undefined4 *)(param_4 + 0x14),*(undefined4 *)(param_4 + 0x18),
                     *(undefined4 *)(param_4 + 0x1c),*(undefined4 *)(param_4 + 0x20),
                     *(undefined4 *)(param_4 + 0x24),
                     *(double *)(param_4 + 0x28) -
                     (double)*(int *)(*piVar4 + 0x1424 + (param_1 & 0xff) * 4) *
                     *(double *)(param_4 + -0x18) * *(double *)(param_4 + 0x20),
                     (double)*(int *)(*piVar4 + 0x1424 + uVar3 * 4) * *(double *)(param_4 + -0x10) *
                     *(double *)(param_4 + 0x20) + *(double *)(param_4 + 0x30));
      }
    }
  }
  return;
}
