// rea decompile_all
// name: FUN_00405fe8
// address: 0x405fe8
// body: available
// range: 0x405fe8-0x40603d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040601d) */
/* WARNING: Removing unreachable block (ram,0x00406023) */
/* WARNING: Removing unreachable block (ram,0x0040602a) */
/* WARNING: Removing unreachable block (ram,0x00406030) */
/* WARNING: Removing unreachable block (ram,0x00406036) */

void FUN_00405fe8(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;

  *param_2 = param_1;
  uVar2 = *(uint *)(param_1 + -0x34);
  uVar1 = uVar2 >> 2;
  while( true ) {
    param_2 = param_2 + 1;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
    *param_2 = 0;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (int *)((int)param_2 + 1);
  }
  for (; *(int **)(param_1 + -0x30) != (int *)0x0; param_1 = **(int **)(param_1 + -0x30)) {
  }
  return;
}
