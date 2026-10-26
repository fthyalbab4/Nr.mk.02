// rea decompile_all
// name: FUN_00627be8
// address: 0x627be8
// body: available
// range: 0x627be8-0x627e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00627be8(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;

  FUN_00627b70();
  iVar2 = -1;
  uVar4 = 0xffffffff;
  uVar5 = 0xffffffff;
  uVar3 = 0xffffffff;
  cVar1 = *PTR_PTR_00689294;
  if (*PTR_PTR_00689294 != '\0') {
    if (*(int *)PTR_DAT_00688db8 == 1) {
      iVar2 = 0x10;
    }
    if (*(int *)PTR_DAT_00688db8 == 2) {
      iVar2 = 0x20;
    }
    if (*(int *)PTR_DAT_00689010 == 1) {
      uVar4 = 0x140;
      uVar5 = 0xf0;
    }
    if (*(int *)PTR_DAT_00689010 == 2) {
      uVar4 = 0x280;
      uVar5 = 0x1e0;
    }
    if (*(int *)PTR_DAT_00689010 == 3) {
      uVar4 = 800;
      uVar5 = 600;
    }
    if (*(int *)PTR_DAT_00689010 == 4) {
      uVar4 = 0x400;
      uVar5 = 0x300;
    }
    if (*(int *)PTR_DAT_00689010 == 5) {
      uVar4 = 0x500;
      uVar5 = 0x400;
    }
    if (*(int *)PTR_DAT_00689010 == 6) {
      uVar4 = 0x640;
      uVar5 = 0x4b0;
    }
    if (*(int *)PTR_DAT_00688bd4 == 1) {
      uVar3 = 0x3c;
    }
    if (*(int *)PTR_DAT_00688bd4 == 2) {
      uVar3 = 0x46;
    }
    if (*(int *)PTR_DAT_00688bd4 == 3) {
      uVar3 = 0x55;
    }
    if (*(int *)PTR_DAT_00688bd4 == 4) {
      uVar3 = 100;
    }
    if (*(int *)PTR_DAT_00688bd4 == 5) {
      uVar3 = 0x78;
    }
  }
  if (((iVar2 == -1) && (iVar2 = FUN_005619b0(), iVar2 != 0x10)) &&
     (iVar2 = FUN_005619b0(), iVar2 != 0x20)) {
    uVar6 = 0;
    iVar2 = FUN_004a1768(&PTR_DAT_00627e7c,3,3,0,0xffffffff,0xffffffff,0);
    if (iVar2 != 6) {
      return uVar6;
    }
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    FUN_00561a78(uVar4,uVar5,uVar3);
  }
  FUN_00561f5c(DAT_0085b438);
  FUN_005624ac(8,8,1);
  FUN_00562564(1);
  FUN_005620a0(*PTR_PTR_0068904c);
  FUN_00562070(*PTR_PTR_0068965c);
  FUN_0056213c(*(undefined4 *)PTR_DAT_00689340);
  FUN_00562030(*PTR_PTR_0068916c ^ 1);
  FUN_00562050(*PTR_PTR_0068888c ^ 1);
  FUN_00562008(*PTR_PTR_006893a8);
  FUN_00561704(&PTR_DAT_00627f48);
  uVar6 = (undefined1)*(undefined4 *)PTR_DAT_00688d78;
  uVar3 = FUN_00561fdc();
  cVar1 = FUN_0061ede0(uVar3,0x280,0x1e0);
  if (cVar1 != '\0') {
    FUN_0061eb80(*PTR_PTR_0068905c);
    FUN_00561704(&PTR_DAT_00627f90);
    FUN_005700b0();
    FUN_00561704(&PTR_DAT_00627ff0);
    FUN_00579878();
    FUN_00561704(&PTR_DAT_00628048);
    FUN_00581164();
    FUN_00561704(&PTR_DAT_006280a8);
    FUN_0061ff3c();
    uVar6 = 1;
    FUN_00561704(&PTR_DAT_006280fc);
  }
  return uVar6;
}
