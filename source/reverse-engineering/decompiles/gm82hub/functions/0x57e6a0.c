// rea decompile_all
// name: FUN_0057e6a0
// address: 0x57e6a0
// body: available
// range: 0x57e6a0-0x57e7c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0057e6a0(int param_1,char param_2,undefined4 param_3,int param_4,char param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  char extraout_DL;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int *piVar7;
  undefined4 uStack_38;
  int local_1c [2];
  int local_14;
  int local_c;
  char local_5;

  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 0x1830) = 0xffffffff;
  FUN_0057e7c8(param_1);
  cVar1 = FUN_005798a4(param_3);
  if (cVar1 != '\0') {
    iVar2 = FUN_005799a0(param_3);
    *(undefined4 *)(param_1 + 0x20) = param_3;
    if (0xff < param_6) {
      param_6 = 0xff;
    }
    if (param_6 < 0) {
      param_6 = 0;
    }
    *(int *)(param_1 + 0x18) = param_6;
    iVar3 = param_6 + *(int *)(iVar2 + 4) + -1;
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 <= iVar3) {
      local_c = (iVar3 - iVar6) + 1;
      do {
        if (param_5 == '\0') {
          uVar5 = FUN_00623b30(iVar2);
          piVar7 = local_1c;
          uVar4 = FUN_00623b18(iVar2);
          FUN_00436ad0(0,0,uVar4,piVar7,uVar5);
        }
        else {
          FUN_006250a8(iVar2,iVar6 - *(int *)(param_1 + 0x18),local_1c);
        }
        uVar5 = FUN_00623b30(iVar2);
        *(undefined4 *)(param_1 + 0xc24 + iVar6 * 4) = uVar5;
        uVar5 = FUN_00623b30(iVar2);
        *(undefined4 *)(param_1 + 0x1834) = uVar5;
        *(int *)(param_1 + 0x1024 + iVar6 * 4) = (local_14 - local_1c[0]) + param_4;
        *(int *)(param_1 + 0x1424 + iVar6 * 4) = -local_1c[0];
        iVar6 = iVar6 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (local_5 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_38;
  }
  return param_1;
}
