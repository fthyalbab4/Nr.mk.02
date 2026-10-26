// rea decompile_all
// name: FUN_00606e94
// address: 0x606e94
// body: available
// range: 0x606e94-0x60701a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00606e94(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  if (*(int *)PTR_DAT_0068939c != 0) {
    FUN_005f96b4(*(undefined4 *)PTR_DAT_006889c0);
    FUN_0060ab60(*(undefined4 *)PTR_DAT_0068939c);
    uVar3 = *(undefined4 *)PTR_DAT_00688c4c;
    *(undefined4 *)PTR_DAT_00688c4c = 0xffffffff;
    FUN_0058a760(7,5);
    if (param_1 != '\0') {
      FUN_0058a760(7,3);
    }
    *(undefined4 *)PTR_DAT_00688c4c = uVar3;
    DAT_00688660 = 0;
    FUN_00409dfc(&DAT_00850eb0,&DAT_006067fc,1,10);
    iVar4 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar5);
        if ((*(char *)(iVar1 + 0x108) == '\0') && (*(char *)(iVar1 + 0xca) != '\0')) {
          DAT_00688660 = DAT_00688660 + 1;
          iVar2 = FUN_00409c34(DAT_00850eb0);
          if (iVar2 < DAT_00688660) {
            FUN_00409dfc(&DAT_00850eb0,&DAT_006067fc,1,DAT_00688660 + 5);
          }
          uVar3 = FUN_0060d2cc(&DAT_0060b63c,1,*(undefined4 *)(iVar1 + 4),
                               *(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0x58),
                               *(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(iVar1 + 0x50),
                               *(undefined4 *)(iVar1 + 0x54));
          *(undefined4 *)(DAT_00850eb0 + -4 + DAT_00688660 * 4) = uVar3;
          FUN_0060d4e0(*(undefined4 *)(DAT_00850eb0 + -4 + DAT_00688660 * 4),iVar1);
          *(undefined1 *)(iVar1 + 0x108) = 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(char *)(*(int *)PTR_DAT_0068939c + 0x14) == '\0') {
      FUN_00405fdc(*(undefined4 *)(*(int *)PTR_DAT_00688c44 + *(int *)PTR_DAT_00688964 * 4));
      *(undefined4 *)(*(int *)PTR_DAT_00688c44 + *(int *)PTR_DAT_00688964 * 4) = 0;
    }
  }
  return;
}
