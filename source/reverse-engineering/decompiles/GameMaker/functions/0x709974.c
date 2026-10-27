// rea decompile_all
// name: FUN_00709974
// address: 0x709974
// body: available
// range: 0x709974-0x709d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00709974(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;

  FUN_0052f12c(param_1,800);
  uVar1 = FUN_00405a4c(&LAB_0052e8fc,1);
  FUN_0052f240(uVar1,DAT_0077f514);
  FUN_0052f240(uVar1,DAT_0077f518);
  FUN_0052f240(uVar1,DAT_0077f51c);
  FUN_0052f240(uVar1,DAT_0077f520);
  FUN_0052f12c(uVar1,DAT_0077f524);
  FUN_0052f240(uVar1,DAT_0077f528);
  FUN_0052f240(uVar1,DAT_0077f52c);
  FUN_0052f12c(uVar1,DAT_0077f530);
  FUN_0052f240(uVar1,DAT_0077f534);
  FUN_0052f12c(uVar1,DAT_0077f538);
  FUN_0052f12c(uVar1,DAT_0077f53c);
  FUN_0052f12c(uVar1,DAT_0077f540);
  FUN_0052f240(uVar1,DAT_0077f544);
  FUN_0052f12c(uVar1,DAT_0077f54c);
  FUN_0052f240(uVar1,DAT_0077f550);
  FUN_0052f240(uVar1,DAT_0077f554);
  FUN_0052f240(uVar1,DAT_0077f558);
  FUN_0052f240(uVar1,DAT_0077f55c);
  FUN_0052f240(uVar1,DAT_0077f560);
  FUN_0052f240(uVar1,DAT_0077f564);
  FUN_0052f240(uVar1,DAT_0077f568);
  FUN_0052f12c(uVar1,DAT_0077f56c);
  FUN_0052f240(uVar1,DAT_0077f548);
  FUN_007097a0();
  if (param_2 == '\0') {
    FUN_0052f12c(uVar1,DAT_0077f570);
    if (DAT_0077f570 == 2) {
      FUN_0052f3c8(uVar1,DAT_0077f580);
    }
    if (DAT_0077f570 == 2) {
      FUN_0052f3c8(uVar1,DAT_0077f57c);
    }
    FUN_0052f240(uVar1,DAT_0077f574);
    if (DAT_0077f574 != '\0') {
      FUN_0052f3c8(uVar1,DAT_0077f578);
    }
  }
  else {
    FUN_0052f240(uVar1,0 < DAT_0077f570);
    if (DAT_0077f570 == 1) {
      uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00782870 + 0x4a8) + 0x1b0));
      FUN_0052f3c8(uVar1,uVar2);
      uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00782870 + 0x4a4) + 0x1b0));
      FUN_0052f3c8(uVar1,uVar2);
    }
    if (DAT_0077f570 == 2) {
      FUN_0052f3c8(uVar1,DAT_0077f580);
      FUN_0052f3c8(uVar1,DAT_0077f57c);
    }
    if (DAT_0077f574 == '\0') {
      uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00782870 + 0x4ac) + 0x1b0));
      FUN_0052f3c8(uVar1,uVar2);
    }
    else {
      FUN_0052f3c8(uVar1,DAT_0077f578);
    }
  }
  FUN_0052f240(uVar1,DAT_0077f584);
  FUN_0052f12c(uVar1,DAT_0077f588);
  FUN_0052f240(uVar1,DAT_0077f58c);
  if (param_2 != '\x01') {
    uVar2 = FUN_00405a4c(&LAB_00433630,1);
    (**(code **)(*DAT_0077f590 + 0x60))(DAT_0077f590,uVar2);
    FUN_0052f298(uVar1,uVar2);
    FUN_00405a7c(uVar2);
  }
  FUN_0052f240(uVar1,DAT_0077f594);
  FUN_0052f240(uVar1,DAT_0077f598);
  FUN_0052f240(uVar1,DAT_0077f59c);
  cVar3 = DAT_0077f5a0 != '\0';
  if (DAT_0077f5a4 != '\0') {
    cVar3 = cVar3 + '\x02';
  }
  FUN_0052f12c(uVar1,cVar3);
  if (param_2 != '\x01') {
    FUN_0052f168(uVar1,DAT_0077f5a8);
    FUN_0052f168(uVar1,PTR_LAB_0077f5ac);
    FUN_004199b0();
    FUN_0052f140(uVar1);
    FUN_0052f168(uVar1,DAT_0077f5b0);
    FUN_0052f12c(uVar1,DAT_0077f5b4);
    FUN_0052f12c(uVar1,DAT_0077f5b8);
    FUN_0052f12c(uVar1,DAT_0077f5bc);
    FUN_0052f12c(uVar1,DAT_0077f5c0);
    FUN_0052f168(uVar1,DAT_0077f5c4);
    FUN_0052f168(uVar1,DAT_0077f5c8);
    FUN_0052f168(uVar1,DAT_0077f5cc);
    FUN_0052f168(uVar1,DAT_0077f5d0);
    FUN_0052f140(uVar1);
  }
  FUN_0052f34c(param_1,uVar1);
  FUN_00405a7c(uVar1);
  return 1;
}
