// rea decompile_all
// name: FUN_00405880
// address: 0x405880
// body: available
// range: 0x405880-0x4058af inclusive
// range: 0x4058f0-0x4058f8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405880(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  byte bVar5;

  bVar5 = 0;
  while (0x40 < param_2) {
    param_2 = param_2 + -0x40;
    FUN_0040582c(param_1,&DAT_004058b0,0x40);
    iVar2 = FUN_0040bfac();
    if (*(int *)(iVar2 + 4) != 0) {
      return param_1;
    }
  }
  if (0 < param_2) {
    puVar3 = &DAT_004058b0;
    if ((*(short *)(param_1 + 4) == -0x284e) || (cVar1 = FUN_004057e8(), cVar1 != '\0')) {
      while( true ) {
        puVar4 = (undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc));
        iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
        if (param_2 < iVar2) break;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
        param_2 = param_2 - iVar2;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iVar2 = (**(code **)(param_1 + 0x1c))();
        if (iVar2 != 0) {
          FUN_004044ac();
          return param_1;
        }
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
    }
    return param_1;
  }
  return param_1;
}
