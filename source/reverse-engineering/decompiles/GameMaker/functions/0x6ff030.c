// rea decompile_all
// name: FUN_006ff030
// address: 0x6ff030
// body: available
// range: 0x6ff030-0x6ff239 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ff054 (push 0x6ff23a followed by fs-segment stack chaining); handler 0x6ff23a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ff030(int *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar6 = 5;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_006ff23a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x6ff06a;
  iVar6 = FUN_00714e30(*(undefined4 *)(*param_1 + 4),*(undefined4 *)(*param_1 + 8));
  if (iVar6 != 0) {
    iVar4 = DAT_007901a0[0x105];
    *(undefined4 *)(iVar4 + 0x1c0) = *(undefined4 *)(iVar6 + 0x10);
    *(undefined4 *)(iVar4 + 0x1c4) = *(undefined4 *)(iVar6 + 0x14);
    local_28 = 0x6ff09b;
    FUN_004ee5c0(DAT_007901a0[0xef],0);
    local_28 = 0x6ff0aa;
    FUN_004ee5c0(DAT_007901a0[0xe2],1);
    local_28 = 0x6ff0b6;
    FUN_006fed54(*(undefined4 *)(*param_1 + 0x44),1);
    local_28 = 0x6ff0c0;
    FUN_006fff10(*param_1,&stack0xfffffff0);
    local_28 = 0x6ff0ca;
    FUN_004ee6d8(DAT_007901a0,unaff_EBX);
    iVar6 = 1;
    do {
      local_28 = 0x6ff0db;
      FUN_007104b0(*param_1,0,&stack0xffffffec);
      local_28 = CONCAT31((int3)((uint)unaff_ESI >> 8),
                          *(short *)(unaff_ESI + -2 + iVar6 * 2) != 0x30);
      local_2c = 0x6ff0f2;
      FUN_0041666c(iVar6,&local_1c);
      local_2c = 0x6ff102;
      FUN_0040839c(&stack0xffffffe8,L"Motion",local_1c);
      local_2c = 0x6ff10c;
      uVar3 = FUN_0044959c(DAT_007901a0,unaff_EDI);
      uVar5 = local_28;
      local_28 = 0x6ff112;
      FUN_00525ba8(uVar3,uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 10);
    local_28 = 0x6ff127;
    FUN_007104b0(*param_1,1,&local_20);
    local_28 = 0x6ff137;
    FUN_004ee6d8(DAT_007901a0[0x106],local_20);
    local_28 = 0x6ff146;
    FUN_004ee5c0(DAT_007901a0[0x109],1);
    local_28 = 0x6ff15c;
    (**(code **)(*(int *)DAT_007901a0[0x109] + 0xf0))
              ((int *)DAT_007901a0[0x109],*(undefined1 *)(*param_1 + 0x48));
    local_28 = 0x6ff166;
    iVar6 = (**(code **)(*DAT_007901a0 + 0x110))();
    if (iVar6 == 1) {
      local_28 = 0x6ff17a;
      FUN_00407f0c(&local_8,L"000000000");
      iVar6 = 1;
      do {
        local_28 = 0x6ff189;
        FUN_0041666c(iVar6,&local_28);
        uVar5 = local_28;
        local_28 = 0x6ff199;
        FUN_0040839c(&local_24,L"Motion",uVar5);
        local_28 = 0x6ff1a3;
        iVar4 = FUN_0044959c(DAT_007901a0,local_24);
        if (*(char *)(iVar4 + 0x1b8) != '\0') {
          local_28 = 0x6ff1b4;
          iVar4 = thunk_FUN_004089c0(&local_8);
          *(undefined2 *)(iVar4 + -2 + iVar6 * 2) = 0x31;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
      local_28 = 0x6ff1cd;
      FUN_007104dc(*param_1,0,local_8);
      local_28 = 0x6ff1dd;
      FUN_004ee6a0(DAT_007901a0[0x106],&local_2c);
      local_28 = 0x6ff1ec;
      FUN_007104dc(*param_1,1,local_2c);
      local_28 = 0x6ff1f1;
      uVar5 = FUN_006fee5c();
      *(undefined4 *)(*param_1 + 0x44) = uVar5;
      local_28 = 0x6ff206;
      uVar2 = (**(code **)(*(int *)DAT_007901a0[0x109] + 0xec))();
      *(undefined1 *)(*param_1 + 0x48) = uVar2;
    }
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006ff241;
  local_20 = (undefined1 *)0x6ff224;
  thunk_FUN_00406e5c(&local_2c,local_24,puVar1);
  local_20 = (undefined1 *)0x6ff231;
  thunk_FUN_00406e80(&local_28,7);
  local_20 = (undefined1 *)0x6ff239;
  thunk_FUN_00406e5c(&local_8);
  return;
}
