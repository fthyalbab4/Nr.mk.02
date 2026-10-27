// rea decompile_all
// name: FUN_0043e7f0
// address: 0x43e7f0
// body: available
// range: 0x43e7f0-0x43e883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043e7f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  short *psVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;

  ppuVar3 = (undefined **)*param_2;
  do {
    if (ppuVar3 == &PTR_FUN_0042eb04) {
      if (*(int *)(param_1 + 0x84) == 0) {
        uVar4 = FUN_00438190(param_3);
      }
      else {
        uVar4 = FUN_00437ff4(*(int *)(param_1 + 0x84),param_3);
      }
      return uVar4;
    }
    psVar2 = (short *)FUN_00438118(ppuVar3);
    if ((psVar2 != (short *)0x0) && (iVar5 = (int)*psVar2, -1 < iVar5 + -1)) {
      local_14 = 0;
      do {
        uVar4 = **(undefined4 **)(psVar2 + local_14 * 2 + 1);
        cVar1 = FUN_00405ecc(uVar4,param_3);
        if (cVar1 != '\0') {
          return uVar4;
        }
        local_14 = local_14 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    ppuVar3 = (undefined **)FUN_00405f68(ppuVar3);
  } while( true );
}
