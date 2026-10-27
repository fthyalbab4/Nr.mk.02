// rea decompile_all
// name: FUN_00440dc8
// address: 0x440dc8
// body: available
// range: 0x440dc8-0x440ef3 inclusive
// range: 0x440f4d-0x440f6e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440de6 (push 0x440f8e followed by fs-segment stack chaining); handler 0x440f8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440e00 (push 0x440f6f followed by fs-segment stack chaining); handler 0x440f6f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440e27 (push 0x440f46 followed by fs-segment stack chaining); handler 0x440f46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440e44 (push 0x440ef4 followed by fs-segment stack chaining); handler 0x440ef4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440dc8(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_54;
  undefined1 *puStackY_50;
  undefined1 *puStackY_4c;
  undefined4 uStackY_48;
  undefined1 *puStackY_44;
  undefined1 *puStackY_40;
  undefined4 uStackY_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;

  puStack_28 = (undefined1 *)0x440ddb;
  (**(code **)(*DAT_00787f5c + 0x14))();
  puStack_2c = &LAB_00440f8e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar2 = FUN_0043bb30(DAT_00787f78);
  uStackY_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_3c;
  if (*(int *)(iVar2 + 8) < 1) {
    *in_FS_OFFSET = uStackY_3c;
    uStackY_3c = 0x440f6e;
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f78 + 8));
    return;
  }
  puStackY_40 = (undefined1 *)0x440e19;
  FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStackY_44 = &LAB_00440f46;
  uStackY_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_48;
  puStackY_4c = (undefined1 *)0x440e36;
  puStackY_40 = &stack0xfffffffc;
  uVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStackY_50 = &LAB_00440ef4;
  uStackY_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_54;
  iVar8 = 0;
  puStackY_4c = &stack0xfffffffc;
LAB_00440ed5:
  while( true ) {
    puVar1 = puStackY_4c;
    if (*(int *)(iVar2 + 8) <= iVar8) {
      *in_FS_OFFSET = uStackY_54;
      puStackY_4c = &LAB_00440efb;
      puStackY_50 = (undefined1 *)0x440ef3;
      FUN_00405a7c(uVar3,uStackY_54,puVar1);
      return;
    }
    puVar4 = (undefined4 *)FUN_0043b048(iVar2,iVar8);
    iVar5 = FUN_0043a95c(puVar4[4]);
    if (iVar5 != 0) break;
    iVar6 = FUN_0042d288(puVar4[1],puVar4[3]);
    if (iVar6 != 0) break;
    FUN_00440d80(puVar4[1]);
    iVar8 = iVar8 + 1;
  }
  if (iVar5 != 0) {
    if ((*(byte *)(iVar5 + 0x1c) & 2) != 0) {
      FUN_00440d80(puVar4[1]);
      iVar8 = iVar8 + 1;
      goto LAB_00440ed5;
    }
    uVar7 = FUN_00440c50(iVar5,puVar4[5]);
    (**(code **)*puVar4)(puVar4,uVar7);
  }
  FUN_00440d48(puVar4[1]);
  FUN_0043aee0(iVar2,iVar8,&stack0xfffffffc);
  FUN_00405a7c(puVar4);
  goto LAB_00440ed5;
}
