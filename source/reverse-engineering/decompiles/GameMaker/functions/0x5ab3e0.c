// rea decompile_all
// name: FUN_005ab3e0
// address: 0x5ab3e0
// body: available
// range: 0x5ab3e0-0x5ab538 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab3e0(int param_1)

{
  undefined4 uVar1;
  LPCWSTR lpBitmapName;
  HBITMAP pHVar2;
  int iVar3;
  byte bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  byte local_7c;
  undefined1 local_7a [82];
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined1 local_1c;
  undefined *local_18;
  undefined1 local_14;

  FUN_00438bf4(0,0,&local_28);
  *(undefined4 *)(param_1 + 0x328) = local_28;
  *(undefined4 *)(param_1 + 0x32c) = local_24;
  local_7c = 0;
  ppuVar5 = &PTR_u_MPPLAY_0077d3f4;
  do {
    bVar4 = 0;
    ppuVar6 = &PTR_DAT_0077d3e8;
    do {
      uVar1 = FUN_00462144(&PTR_FUN_004587d4,1);
      *(undefined4 *)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4) = uVar1;
      local_20 = *ppuVar6;
      local_1c = 10;
      local_18 = *ppuVar5;
      local_14 = 10;
      lpBitmapName = (LPCWSTR)FUN_00417cc4(local_7a,L"%s_%s",&local_20,1);
      pHVar2 = LoadBitmapW(DAT_00785c40,lpBitmapName);
      FUN_00463a4c(*(undefined4 *)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4),pHVar2
                  );
      iVar3 = (**(code **)(**(int **)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4) +
                          0x30))();
      if (*(int *)(param_1 + 0x328) < iVar3) {
        uVar1 = (**(code **)(**(int **)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4) +
                            0x30))();
        *(undefined4 *)(param_1 + 0x328) = uVar1;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4) +
                          0x24))();
      if (*(int *)(param_1 + 0x32c) < iVar3) {
        uVar1 = (**(code **)(**(int **)(param_1 + (uint)local_7c * 0x10 + 0x27c + (uint)bVar4 * 4) +
                            0x24))();
        *(undefined4 *)(param_1 + 0x32c) = uVar1;
      }
      bVar4 = bVar4 + 1;
      ppuVar6 = ppuVar6 + 1;
    } while (bVar4 != 3);
    local_7c = local_7c + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (local_7c != 9);
  *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 8;
  *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 4;
  return;
}
