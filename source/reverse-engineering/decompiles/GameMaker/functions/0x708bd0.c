// rea decompile_all
// name: FUN_00708bd0
// address: 0x708bd0
// body: available
// range: 0x708bd0-0x708de1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00708bd0(void)

{
  undefined4 uVar1;
  float10 in_ST0;
  float10 in_ST1;

  DAT_0077f514 = 0;
  DAT_0077f518 = 0;
  DAT_0077f51c = 0;
  DAT_0077f520 = 1;
  DAT_0077f524 = 0xffffffff;
  DAT_0077f528 = 0;
  DAT_0077f52c = 0;
  DAT_0077f530 = 0;
  DAT_0077f534 = 0;
  DAT_0077f538 = 0;
  DAT_0077f53c = 0;
  DAT_0077f540 = 0;
  DAT_0077f544 = 0;
  DAT_0077f548 = 0;
  DAT_0077f54c = 0;
  DAT_0077f550 = 1;
  DAT_0077f554 = 1;
  DAT_0077f558 = 1;
  DAT_0077f55c = 1;
  DAT_0077f560 = 1;
  DAT_0077f564 = 1;
  DAT_0077f568 = 1;
  DAT_0077f56c = 0;
  DAT_0077f570 = 1;
  DAT_0077f574 = 0;
  if (DAT_0077f578 != 0) {
    FUN_00405a7c(DAT_0077f578);
  }
  DAT_0077f578 = 0;
  if (DAT_0077f57c != 0) {
    FUN_00405a7c(DAT_0077f57c);
  }
  DAT_0077f57c = 0;
  if (DAT_0077f580 != 0) {
    FUN_00405a7c(DAT_0077f580);
  }
  DAT_0077f580 = 0;
  DAT_0077f584 = 0;
  DAT_0077f588 = 0xff;
  DAT_0077f58c = 1;
  if (DAT_0077f590 == (int *)0x0) {
    DAT_0077f590 = (int *)FUN_0046475c(&PTR_LAB_00459100,1);
  }
  uVar1 = FUN_0045f664(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00782870 + 0x3d0) + 0x1b0));
  (**(code **)(*DAT_0077f590 + 8))(DAT_0077f590,uVar1);
  DAT_0077f594 = 1;
  DAT_0077f598 = 0;
  DAT_0077f59c = 0;
  DAT_0077f5a0 = 0;
  DAT_0077f5a4 = 1;
  FUN_00407eb8(&DAT_0077f5a8,0);
  FUN_00407eb8(&PTR_LAB_0077f5ac,&DAT_00708df0);
  FUN_004199b0();
  _DAT_0079081c = (double)in_ST0;
  FUN_00407eb8(&DAT_0077f5b0,0);
  DAT_0077f5b4 = 1;
  DAT_0077f5b8 = 0;
  DAT_0077f5bc = 0;
  DAT_0077f5c0 = 0;
  FUN_00407eb8(&DAT_0077f5c4,0);
  FUN_00407eb8(&DAT_0077f5c8,0);
  FUN_00407eb8(&DAT_0077f5cc,0);
  FUN_00407eb8(&DAT_0077f5d0,0);
  DAT_00790824 = 0;
  FUN_004199b0();
  _DAT_0079082c = (double)in_ST1;
  return;
}
