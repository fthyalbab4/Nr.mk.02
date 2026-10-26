// rea decompile_all
// name: FUN_006703b8
// address: 0x6703b8
// body: available
// range: 0x6703b8-0x670551 inclusive
// range: 0x670559-0x6705f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6704a1 (push 0x670552 followed by fs-segment stack chaining); handler 0x670552 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006703b8(int param_1,int param_2,char param_3)

{
  short *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x6703d5;
  FUN_0050a7f0(param_1,param_2,param_3);
  if (*(char *)(*(int *)PTR_DAT_00782280 + 0xa4) == '\0') {
    bVar2 = false;
  }
  else {
    iVar4 = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x94) + -4);
    }
    bVar2 = 0 < iVar4;
  }
  if ((bVar2) && (*(char *)(param_1 + 0xb0) == '\0')) {
    puStack_20 = (undefined1 *)0x670417;
    FUN_006705f8(param_1,*(undefined4 *)(param_1 + 0x94));
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  if (param_3 == '\x01') {
    if (param_2 == *(int *)(param_1 + 0xa4)) {
      puStack_20 = (undefined1 *)0x670439;
      FUN_00670e04(param_1,0);
    }
    if (param_2 == *(int *)(param_1 + 0x9c)) {
      puStack_20 = (undefined1 *)0x67044a;
      FUN_00670908(param_1,0);
    }
    if (param_2 == *(int *)(param_1 + 0x84)) {
      puStack_20 = (undefined1 *)0x67045b;
      FUN_00670828(param_1,0);
    }
    if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
      puStack_20 = (undefined1 *)0x670472;
      cVar3 = FUN_00405c98(param_2,&PTR_FUN_00508b94);
      if (cVar3 != '\0') {
        puStack_20 = (undefined1 *)0x670485;
        iVar4 = FUN_0066ff78(param_1,param_2,0);
        puStack_20 = (undefined1 *)0x670493;
        iVar5 = FUN_00405a4c(&PTR_LAB_0042f444,1);
        puStack_24 = &LAB_00670552;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        while (iVar4 != 0) {
          iVar6 = FUN_00673fc4(iVar4);
          if (*(int *)(*(int *)(iVar6 + 0x20) + 0xc) != 0) {
            iVar6 = FUN_00673fc4(iVar4);
            psVar1 = (short *)(*(int *)(*(int *)(iVar6 + 0x20) + 0xc) + 0x1ac);
            *psVar1 = *psVar1 + 1;
            iVar6 = FUN_00673fc4(iVar4);
            FUN_0043ae88(iVar5,*(undefined4 *)(*(int *)(iVar6 + 0x20) + 0xc));
          }
          uVar7 = FUN_0043c914(iVar4);
          uVar8 = FUN_00673fc4(iVar4);
          FUN_0043d034(uVar8,uVar7);
          iVar4 = FUN_0066ff78(param_1,param_2,0);
        }
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x6705ee;
        iVar4 = *(int *)(iVar5 + 8);
        if (-1 < iVar4 + -1) {
          iVar6 = 0;
          do {
            puStack_24 = (undefined1 *)0x670532;
            iVar9 = FUN_0043b048(iVar5,iVar6);
            if (iVar9 != 0) {
              puStack_24 = (undefined1 *)0x670540;
              FUN_0043b048(iVar5,iVar6);
              puStack_24 = (undefined1 *)0x670545;
              FUN_004f2c1c();
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        puStack_24 = (undefined1 *)0x670551;
        FUN_00405a7c(iVar5);
        return;
      }
      puStack_20 = (undefined1 *)0x670566;
      cVar3 = FUN_00405c98(param_2,&PTR_LAB_0066dfc0);
      if (cVar3 == '\0') {
        puStack_20 = (undefined1 *)0x6705a8;
        cVar3 = FUN_00405c98(param_2,&PTR_FUN_0050910c);
        if (((cVar3 != '\0') && (*(int *)(param_1 + 0x8c) != 0)) &&
           (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 8) + 8) + -1, -1 < iVar4)) {
          do {
            puStack_20 = (undefined1 *)0x6705d4;
            iVar5 = FUN_0067162c(*(undefined4 *)(param_1 + 0x8c),iVar4);
            if (param_2 == *(int *)(iVar5 + 0xc)) {
              puStack_20 = (undefined1 *)0x6705e6;
              FUN_0043d034(*(undefined4 *)(param_1 + 0x8c),iVar4);
              return;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != -1);
        }
      }
      else {
        puStack_20 = (undefined1 *)0x670578;
        iVar4 = FUN_0067001c(param_1,param_2,*(undefined4 *)(param_1 + 0x6c));
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        puStack_20 = (undefined1 *)0x670590;
        iVar4 = FUN_0067001c(param_1,param_2,*(undefined4 *)(param_1 + 0x90));
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
      }
    }
  }
  return;
}
