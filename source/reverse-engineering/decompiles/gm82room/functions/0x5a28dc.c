// rea decompile_all
// name: FUN_005a28dc
// address: 0x5a28dc
// body: available
// range: 0x5a28dc-0x5a2966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a28dc(int param_1,HPALETTE param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  UINT UVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_414 [4];
  tagPALETTEENTRY local_410 [256];

  UVar3 = GetPaletteEntries(param_2,0,0x100,(LPPALETTEENTRY)(auStack_414 + 4));
  if (UVar3 != 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,UVar3);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(UINT *)(param_1 + 0x84) = UVar3;
    if (-1 < (int)(UVar3 - 1)) {
      iVar5 = 0;
      puVar2 = &stack0xfffffbe8;
      do {
        piVar1 = *(int **)(param_1 + 0x88);
        *(undefined1 *)(piVar1[2] + iVar5) = puVar2[4];
        *(undefined1 *)(piVar1[1] + iVar5) = puVar2[5];
        *(undefined1 *)(*piVar1 + iVar5) = puVar2[6];
        iVar5 = iVar5 + 1;
        UVar3 = UVar3 - 1;
        puVar2 = puVar2 + 4;
      } while (UVar3 != 0);
    }
  }
  return;
}
