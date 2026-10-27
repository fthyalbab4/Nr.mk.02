// rea decompile_all
// name: FUN_004b2588
// address: 0x4b2588
// body: available
// range: 0x4b2588-0x4b274c inclusive
// range: 0x4b2754-0x4b2766 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b25e6 (push 0x4b274d followed by fs-segment stack chaining); handler 0x4b274d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2588(int param_1,int param_2,char param_3,char param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  if (((param_2 == 0) || (*(char *)(param_2 + 0x24) != '\0')) ||
     ((*(byte *)(param_1 + 0x2e1) & 2) == 0)) {
    puStack_24 = (undefined1 *)0x4b275e;
    FUN_004b24b4(param_1,param_2);
    return;
  }
  puStack_24 = (undefined1 *)0x4b25c9;
  iVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_24 = (undefined1 *)0x4b25d8;
  iVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_28 = &LAB_004b274d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar4 = *(int *)(param_1 + 0x2ec);
  puStack_24 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (iVar4 != param_2) {
    do {
      puStack_24 = puVar1;
      if (iVar4 == 0) goto LAB_004b2659;
      FUN_0043ae88(iVar2,iVar4);
      if (param_3 == '\0') {
        if ((*(byte *)(param_1 + 0x2e1) & 4) == 0) {
          iVar4 = FUN_004ad2a8(iVar4);
        }
        else {
          iVar4 = FUN_004ad1a4(iVar4);
        }
      }
      else if ((*(byte *)(param_1 + 0x2e1) & 4) == 0) {
        iVar4 = FUN_004ad328(iVar4);
      }
      else {
        iVar4 = FUN_004ad1e8(iVar4);
      }
      puVar1 = puStack_24;
    } while (iVar4 != param_2);
    FUN_0043ae88(iVar2,iVar4);
  }
LAB_004b2659:
  if (((param_4 != '\0') &&
      (FUN_0043b6c4(iVar3,*(undefined4 *)(param_1 + 0x2e4),4,iVar2), 0 < *(int *)(iVar3 + 8))) &&
     (iVar4 = *(int *)(*(int *)(param_1 + 0x2e4) + 8) + -1, -1 < iVar4)) {
    do {
      uVar5 = FUN_0043b048(*(undefined4 *)(param_1 + 0x2e4),iVar4);
      iVar6 = FUN_0043b0b0(iVar3,uVar5);
      if (iVar6 != -1) {
        FUN_004b243c(param_1,iVar4);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  FUN_0043b6c4(iVar2,*(undefined4 *)(param_1 + 0x2e4),4);
  iVar4 = *(int *)(iVar2 + 8);
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      uVar5 = FUN_0043b048(iVar2,iVar6);
      FUN_004b2464(param_1,uVar5,0);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x2e4),param_2);
  if (iVar4 < 1) {
    if (iVar4 == -1) {
      FUN_004b2464(param_1,param_2,0);
    }
  }
  else {
    FUN_0043aee0(*(undefined4 *)(param_1 + 0x2e4),iVar4);
    FUN_0043b100(*(undefined4 *)(param_1 + 0x2e4),0,param_2);
  }
  uVar5 = uStack_2c;
  *in_FS_OFFSET = 0;
  uStack_2c = 0x4b275e;
  FUN_00405a7c(iVar3,0,uVar5);
  FUN_00405a7c(iVar2);
  return;
}
