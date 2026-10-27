// rea decompile_all
// name: FUN_005b874c
// address: 0x5b874c
// body: available
// range: 0x5b874c-0x5b87b2 inclusive
// range: 0x5b87e1-0x5b898b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8770 (push 0x5b898c followed by fs-segment stack chaining); handler 0x5b898c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b878e (push 0x5b87b3 followed by fs-segment stack chaining); handler 0x5b87b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b874c(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x5b8765;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_005b898c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5b877b;
  puStack_1c = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    puStack_2c = &LAB_005b87b3;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    uVar4 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
    FUN_0043d544(uVar4,local_8);
    puVar1 = puStack_28;
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x5b87e8;
    iVar5 = FUN_0050bbe0(uVar4,uStack_30,puVar1);
    if (iVar5 == 0x21c) {
      puStack_28 = (undefined1 *)0x5b880e;
      iVar5 = FUN_0050bbe0(uVar4);
      if (iVar5 == *(int *)PTR_DAT_00688e9c) {
        puStack_28 = (undefined1 *)0x5b8837;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688964 = uVar6;
        puStack_28 = (undefined1 *)0x5b8846;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_006889c0 = uVar6;
        puStack_28 = (undefined1 *)0x5b8855;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688f94 = uVar6;
        puStack_28 = (undefined1 *)0x5b8864;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688b88 = uVar6;
        puStack_28 = (undefined1 *)0x5b8873;
        FUN_0050bbf4(uVar4);
        *(double *)PTR_DAT_00688c48 = (double)in_ST0;
        puStack_28 = (undefined1 *)0x5b8882;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688ff0 = uVar6;
        puStack_28 = (undefined1 *)0x5b8891;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688a0c = uVar6;
        puStack_28 = (undefined1 *)0x5b88a0;
        uVar3 = FUN_0050bcd0(uVar4);
        *PTR_DAT_006891d0 = uVar3;
        puStack_28 = (undefined1 *)0x5b88af;
        FUN_0057262c(uVar4);
        puStack_28 = (undefined1 *)0x5b88b6;
        iVar5 = FUN_0050bbe0(uVar4);
        puStack_2c = (undefined1 *)0x5b88ce;
        puStack_28 = (undefined1 *)iVar5;
        FUN_00409dfc(PTR_DAT_00688c44,&DAT_00571724,1);
        if (-1 < iVar5 + -1) {
          iVar7 = 0;
          do {
            puStack_28 = (undefined1 *)0x5b88ea;
            FUN_00405fdc(*(undefined4 *)(*(int *)PTR_DAT_00688c44 + iVar7 * 4));
            *(undefined4 *)(*(int *)PTR_DAT_00688c44 + iVar7 * 4) = 0;
            puStack_28 = (undefined1 *)0x5b88fd;
            cVar2 = FUN_0050bcd0(uVar4);
            if (cVar2 != '\0') {
              puStack_28 = (undefined1 *)0x5b890d;
              uVar6 = FUN_00609404(&DAT_006082a8,1);
              *(undefined4 *)(*(int *)PTR_DAT_00688c44 + iVar7 * 4) = uVar6;
              puStack_28 = (undefined1 *)0x5b8929;
              FUN_0060a060(*(undefined4 *)(*(int *)PTR_DAT_00688c44 + iVar7 * 4),uVar4);
            }
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(undefined4 *)PTR_DAT_0068939c =
             *(undefined4 *)(*(int *)PTR_DAT_00688c44 + *(int *)PTR_DAT_00688964 * 4);
        puStack_28 = (undefined1 *)0x5b894e;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00689180 = uVar6;
        puStack_28 = (undefined1 *)0x5b895d;
        uVar6 = FUN_0050bbe0(uVar4);
        *(undefined4 *)PTR_DAT_00688a74 = uVar6;
        puStack_28 = (undefined1 *)0x5b896c;
        FUN_00405fdc(uVar4);
        puStack_28 = (undefined1 *)0x5b8971;
        FUN_0058f93c();
      }
      else {
        puStack_28 = (undefined1 *)0x5b8824;
        FUN_0061156c(L"This is a save file for a different game!",0);
        puStack_28 = (undefined1 *)0x5b882b;
        FUN_00405fdc(uVar4);
      }
    }
    else {
      puStack_28 = (undefined1 *)0x5b87fb;
      FUN_0061156c(&PTR_DAT_005b89f4,0);
      puStack_28 = (undefined1 *)0x5b8802;
      FUN_00405fdc(uVar4);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005b8993;
  puStack_20 = (undefined1 *)0x5b898b;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
