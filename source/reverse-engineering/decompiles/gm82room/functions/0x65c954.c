// rea decompile_all
// name: FUN_0065c954
// address: 0x65c954
// body: available
// range: 0x65c954-0x65caa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65c97e (push 0x65caa4 followed by fs-segment stack chaining); handler 0x65caa4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c954(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int iVar7;
  undefined4 local_8;

  iVar4 = 5;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_1c = (undefined1 *)0x65c973;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_0065caa4;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_28 = 0x65c98d;
  puStack_1c = &stack0xfffffffc;
  uVar2 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  uStack_28 = 0x65c99b;
  FUN_0050c318(uVar2,local_8);
  uStack_28 = 0x65c9a3;
  iVar4 = FUN_0050bbe0(uVar2);
  if (iVar4 == 0x259) {
    uStack_28 = 0x65c9c1;
    uVar3 = FUN_0050bbe0(uVar2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uStack_28 = 0x65c9cc;
    uVar3 = FUN_0050bbe0(uVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uStack_28 = *(undefined4 *)(param_1 + 4);
    local_2c = 0x65c9e6;
    FUN_00409dfc(param_1 + 0xc,&DAT_00659678,1);
    iVar4 = *(int *)(param_1 + 4);
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        uStack_28 = *(undefined4 *)(param_1 + 8);
        local_2c = 0x65ca19;
        FUN_00409dfc(*(int *)(param_1 + 0xc) + iVar7 * 4,&DAT_00659638,1);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_1 + 4);
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        iVar5 = *(int *)(param_1 + 8);
        if (-1 < iVar5 + -1) {
          iVar6 = 0;
          do {
            uStack_28 = 0x65ca4d;
            FUN_0065a47c(uVar2,&local_2c);
            uStack_28 = 0x65ca6a;
            FUN_00409360(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + iVar6 * 0x18,&local_2c,
                         &DAT_00615f70);
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uStack_28 = 0x65ca7e;
    FUN_00405fdc(uVar2);
  }
  else {
    uStack_28 = 0x65c9b2;
    FUN_00405fdc(uVar2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0065caab;
  puStack_20 = (undefined1 *)0x65ca9b;
  FUN_004090d0(&local_2c,&DAT_00615f70,puVar1);
  puStack_20 = (undefined1 *)0x65caa3;
  thunk_FUN_004072d8(&local_8);
  return;
}
