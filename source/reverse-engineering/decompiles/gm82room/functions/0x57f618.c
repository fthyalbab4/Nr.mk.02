// rea decompile_all
// name: FUN_0057f618
// address: 0x57f618
// body: available
// range: 0x57f618-0x57f7fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f618(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;

  piVar5 = (int *)(param_6 + -4);
  uVar4 = param_1 & 0xff;
  if ((*(int *)(*piVar5 + 0x18) <= (int)uVar4) && ((int)uVar4 <= *(int *)(*piVar5 + 0x1c))) {
    if (*(int *)(*piVar5 + 0x20) < 0) {
      if (-1 < *(int *)(*piVar5 + 0x1830)) {
        FUN_00621ef0(*(int *)(*piVar5 + 0x1830),param_2,param_3,*(undefined4 *)(param_6 + 8),
                     *(undefined4 *)(param_6 + 0xc),param_4,param_5,
                     (double)((_DAT_0057f7fc * (float10)*(double *)(param_6 + 0x1c)) /
                             (float10)180.0),*(undefined4 *)(param_6 + 0x24),
                     *(undefined4 *)(param_6 + 0x28),*(undefined4 *)(param_6 + 0x2c),
                     *(undefined4 *)(param_6 + 0x30),
                     *(double *)(param_6 + 0x34) -
                     (double)*(int *)(*piVar5 + 0x1424 + (param_1 & 0xff) * 4) *
                     *(double *)(param_6 + -0x18) * *(double *)(param_6 + 0x2c),
                     (double)*(int *)(*piVar5 + 0x1424 + uVar4 * 4) * *(double *)(param_6 + -0x10) *
                     *(double *)(param_6 + 0x2c) + *(double *)(param_6 + 0x3c),
                     (double)*(int *)(*piVar5 + 0xc24 + uVar4 * 4),
                     (double)*(int *)(*piVar5 + 0x824 + uVar4 * 4),
                     (double)*(int *)(*piVar5 + 0x424 + uVar4 * 4),
                     (double)*(int *)(*piVar5 + 0x24 + uVar4 * 4));
      }
    }
    else {
      cVar1 = FUN_005798a4(*(undefined4 *)(*piVar5 + 0x20));
      if (cVar1 != '\0') {
        uVar2 = FUN_005799a0(*(undefined4 *)(*piVar5 + 0x20));
        *(undefined4 *)(param_6 + -8) = uVar2;
        uVar8 = 0;
        uVar7 = 0;
        iVar3 = FUN_00623b18(*(undefined4 *)(param_6 + -8));
        dVar6 = (double)iVar3;
        iVar3 = FUN_00623b30(*(undefined4 *)(param_6 + -8));
        FUN_00624d40(*(undefined4 *)(param_6 + -8),uVar4 - *(int *)(*piVar5 + 0x18),param_2,
                     *(undefined4 *)(param_6 + 8),*(undefined4 *)(param_6 + 0xc),param_4,param_5,
                     param_3,*(undefined4 *)(param_6 + 0x1c),*(undefined4 *)(param_6 + 0x20),
                     *(undefined4 *)(param_6 + 0x24),*(undefined4 *)(param_6 + 0x28),
                     *(undefined4 *)(param_6 + 0x2c),*(undefined4 *)(param_6 + 0x30),
                     *(undefined4 *)(param_6 + 0x34),*(undefined4 *)(param_6 + 0x38),
                     (double)*(int *)(*piVar5 + 0x1424 + uVar4 * 4) + *(double *)(param_6 + 0x3c),
                     (double)iVar3,dVar6,uVar7,uVar8);
      }
    }
  }
  return;
}
