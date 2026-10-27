// rea decompile_all
// name: FUN_005f5304
// address: 0x5f5304
// body: available
// range: 0x5f5304-0x5f536a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005f5330) */

void FUN_005f5304(int param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  piVar3 = *(int **)(param_1 + 0x88);
  if (piVar3 == (int *)0x0) {
    uVar4 = param_2 & 0xff;
    if (0 < *(int *)(param_1 + 0x68 + uVar4 * 0x18)) {
      puVar1 = (uint *)(param_1 + 0x58 + uVar4 * 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + param_4;
      piVar3 = (int *)(param_1 + 0x5c + uVar4 * 0x18);
      *piVar3 = *piVar3 + param_5 + (uint)CARRY4(uVar2,param_4);
      if (*(short *)(param_1 + 0x42) != 0) {
        (**(code **)(param_1 + 0x40))
                  (*(undefined4 *)(param_1 + 0x44),param_1,param_2,
                   *(undefined4 *)(param_1 + 0x58 + uVar4 * 0x18),
                   *(undefined4 *)(param_1 + 0x5c + uVar4 * 0x18));
      }
    }
  }
  else {
    (**(code **)(*piVar3 + 0x3c))(piVar3,param_2,*piVar3,param_4,param_5);
  }
  return;
}
