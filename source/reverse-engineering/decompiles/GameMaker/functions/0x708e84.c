// rea decompile_all
// name: FUN_00708e84
// address: 0x708e84
// body: available
// range: 0x708e84-0x709420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x708ef0 (push 0x709421 followed by fs-segment stack chaining); handler 0x709421 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00708e84(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 local_9c84;
  undefined4 local_9c80;
  undefined4 local_9c7c;
  undefined4 local_9c78;
  undefined4 local_9c74;
  undefined4 local_9c70;
  undefined4 local_9c6c;
  undefined4 local_9c68;
  undefined4 local_9c64;
  undefined4 local_9c60;
  undefined4 local_9c5c [8175];
  undefined4 uStack_1ca0;
  undefined4 uStack_1c9c;
  undefined1 *puStack_1c98;
  undefined1 *puStack_1c94;
  int local_18;

  puStack_1c94 = &stack0xfffffffc;
  iVar6 = 9;
  do {
    iVar4 = iVar6;
    iVar6 = iVar4 + -1;
  } while (iVar4 + -1 != 0);
  local_9c84 = 0;
  local_9c80 = 0;
  local_9c7c = 0;
  local_9c78 = 0;
  local_9c74 = 0;
  local_9c70 = 0;
  local_9c6c = 0;
  local_9c68 = 0;
  local_9c64 = 0;
  local_9c60 = 0;
  puStack_1c98 = &LAB_00709421;
  uStack_1c9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c9c;
  uStack_1ca0 = 0x708efc;
  FUN_00708bd0();
  if ((499 < param_2) && (param_2 < 0x2bf)) {
    uStack_1ca0 = 0x708f1b;
    DAT_0077f514 = FUN_0052f114(iVar4);
    if (599 < param_2) {
      uStack_1ca0 = 0x708f2f;
      DAT_0077f518 = FUN_0052f114(iVar4);
    }
    uStack_1ca0 = 0x708f3b;
    DAT_0077f51c = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x708f47;
    DAT_0077f520 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x708f53;
    DAT_0077f524 = FUN_0052f024(iVar4);
    if (param_2 < 0x21c) {
      uStack_1ca0 = 0x708fa3;
      FUN_0052f024(iVar4);
      uStack_1ca0 = 0x708fb2;
      FUN_0052f114(iVar4);
    }
    else {
      uStack_1ca0 = 0x708f67;
      DAT_0077f528 = FUN_0052f114(iVar4);
      uStack_1ca0 = 0x708f7b;
      DAT_0077f52c = FUN_0052f114(iVar4);
      uStack_1ca0 = 0x708f8f;
      DAT_0077f530 = FUN_0052f024(iVar4);
    }
    uStack_1ca0 = 0x708fb9;
    DAT_0077f534 = FUN_0052f114(iVar4);
    if (param_2 < 0x21c) {
      uStack_1ca0 = 0x708fcd;
      FUN_0052f114(iVar4);
    }
    uStack_1ca0 = 0x708fd4;
    DAT_0077f538 = FUN_0052f024(iVar4);
    if (param_2 < 0x21c) {
      DAT_0077f538 = 0;
    }
    uStack_1ca0 = 0x708fef;
    DAT_0077f53c = FUN_0052f024(iVar4);
    if (param_2 < 0x21c) {
      DAT_0077f53c = 0;
    }
    uStack_1ca0 = 0x70900a;
    DAT_0077f540 = FUN_0052f024(iVar4);
    if (param_2 < 0x21c) {
      DAT_0077f540 = 0;
      uStack_1ca0 = 0x70902d;
      FUN_0052f114(iVar4);
      uStack_1ca0 = 0x70903c;
      FUN_0052f114(iVar4);
    }
    uStack_1ca0 = 0x709043;
    DAT_0077f544 = FUN_0052f114(iVar4);
    if (0x21d < param_2) {
      uStack_1ca0 = 0x709057;
      DAT_0077f54c = FUN_0052f024(iVar4);
    }
    uStack_1ca0 = 0x709063;
    DAT_0077f554 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x70906f;
    DAT_0077f558 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x70907b;
    DAT_0077f55c = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x709087;
    DAT_0077f560 = FUN_0052f114(iVar4);
    if (700 < param_2) {
      uStack_1ca0 = 0x70909b;
      DAT_0077f564 = FUN_0052f114(iVar4);
    }
    if (0x26b < param_2) {
      uStack_1ca0 = 0x7090af;
      DAT_0077f568 = FUN_0052f114(iVar4);
    }
    if (0x207 < param_2) {
      uStack_1ca0 = 0x7090c3;
      DAT_0077f56c = FUN_0052f024(iVar4);
    }
    if (param_2 < 0x21c) {
      uStack_1ca0 = 0x7090d7;
      FUN_0052f114(iVar4);
      uStack_1ca0 = 0x7090e6;
      FUN_0052f114(iVar4);
    }
    uStack_1ca0 = 0x7090ed;
    DAT_0077f548 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x7090f9;
    DAT_0077f570 = FUN_0052f024(iVar4);
    if (DAT_0077f570 == 2) {
      uStack_1ca0 = 0x70910e;
      DAT_0077f580 = FUN_00708df8(iVar4);
      uStack_1ca0 = 0x70911a;
      DAT_0077f57c = FUN_00708df8(iVar4);
    }
    uStack_1ca0 = 0x709126;
    DAT_0077f574 = FUN_0052f114(iVar4);
    if (DAT_0077f574 != '\0') {
      uStack_1ca0 = 0x70913b;
      DAT_0077f578 = FUN_00708df8(iVar4);
    }
    if (0x1fd < param_2) {
      uStack_1ca0 = 0x70914f;
      DAT_0077f584 = FUN_0052f114(iVar4);
      uStack_1ca0 = 0x70915b;
      DAT_0077f588 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x709167;
      DAT_0077f58c = FUN_0052f114(iVar4);
    }
    uStack_1ca0 = 0x709173;
    uVar5 = FUN_0052f258(iVar4);
    uStack_1ca0 = 0x709181;
    (**(code **)(*DAT_0077f590 + 0x5c))(DAT_0077f590,uVar5);
    uStack_1ca0 = 0x709188;
    FUN_00405a7c(uVar5);
    uStack_1ca0 = 0x70918f;
    DAT_0077f594 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x70919b;
    DAT_0077f598 = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x7091a7;
    DAT_0077f59c = FUN_0052f114(iVar4);
    uStack_1ca0 = 0x7091b3;
    DAT_0077f5a0 = FUN_0052f114(iVar4);
    DAT_0077f5a4 = 0;
    uStack_1ca0 = 0x7091cc;
    FUN_0052f060(iVar4,&local_9c60);
    uStack_1ca0 = 0x7091dc;
    FUN_00407eb8(&DAT_0077f5a8,local_9c60);
    if (param_2 < 700) {
      uStack_1ca0 = 0x7091eb;
      uVar5 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x7091f6;
      FUN_0041666c(uVar5,&local_9c64);
      uStack_1ca0 = 0x709206;
      FUN_00407eb8(&PTR_LAB_0077f5ac,local_9c64);
    }
    else {
      uStack_1ca0 = 0x709215;
      FUN_0052f060(iVar4,&local_9c68);
      uStack_1ca0 = 0x709225;
      FUN_00407eb8(&PTR_LAB_0077f5ac,local_9c68);
    }
    uStack_1ca0 = 0x70922c;
    FUN_0052f038(iVar4);
    _DAT_0079081c = (double)in_ST0;
    uStack_1ca0 = 0x709240;
    FUN_0052f060(iVar4,&local_9c6c);
    uStack_1ca0 = 0x709250;
    FUN_00407eb8(&DAT_0077f5b0,local_9c6c);
    if (0x211 < param_2) {
      uStack_1ca0 = 0x70925f;
      FUN_006967b4(iVar4);
    }
    if (0x2bd < param_2) {
      uStack_1ca0 = 0x709272;
      DAT_0077f5b4 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x70927e;
      DAT_0077f5b8 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x70928a;
      DAT_0077f5bc = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x709296;
      DAT_0077f5c0 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x7092a8;
      FUN_0052f060(iVar4,&local_9c70);
      uStack_1ca0 = 0x7092b8;
      FUN_00407eb8(&DAT_0077f5c4,local_9c70);
      uStack_1ca0 = 0x7092c5;
      FUN_0052f060(iVar4,&local_9c74);
      uStack_1ca0 = 0x7092d5;
      FUN_00407eb8(&DAT_0077f5c8,local_9c74);
      uStack_1ca0 = 0x7092e2;
      FUN_0052f060(iVar4,&local_9c78);
      uStack_1ca0 = 0x7092f2;
      FUN_00407eb8(&DAT_0077f5cc,local_9c78);
      uStack_1ca0 = 0x7092ff;
      FUN_0052f060(iVar4,&local_9c7c);
      uStack_1ca0 = 0x70930f;
      FUN_00407eb8(&DAT_0077f5d0,local_9c7c);
    }
    if ((0x21c < param_2) && (param_2 < 0x26c)) {
      uStack_1ca0 = 0x70932c;
      FUN_006cc4d0();
      uStack_1ca0 = 0x709333;
      iVar6 = FUN_0052f024(iVar4);
      if (-1 < iVar6 + -1) {
        puVar8 = local_9c5c;
        local_18 = iVar6;
        do {
          uStack_1ca0 = 0x70934d;
          uVar5 = FUN_006cc6e4();
          *puVar8 = uVar5;
          uStack_1ca0 = 0x709358;
          iVar7 = FUN_006cc9a8(uVar5);
          uStack_1ca0 = 0x709361;
          FUN_006ca844(iVar7);
          uStack_1ca0 = 0x70936e;
          FUN_0052f060(iVar4,&local_9c80);
          uStack_1ca0 = 0x70937d;
          FUN_006cabf4(iVar7,local_9c80,0);
          uStack_1ca0 = 0x70938b;
          FUN_00417398(*(undefined4 *)(iVar7 + 8),&local_9c84);
          uStack_1ca0 = 0x709399;
          FUN_00407eb8(iVar7 + 4,local_9c84);
          puVar8 = puVar8 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      uStack_1ca0 = 0x7093a8;
      iVar7 = FUN_0052f024(iVar4);
      uStack_1ca0 = 0x7093b2;
      uVar2 = FUN_0052f114(iVar4);
      uStack_1ca0 = 0x7093bc;
      uVar3 = FUN_0052f114(iVar4);
      if (-1 < iVar6 + -1) {
        puVar8 = local_9c5c;
        local_18 = iVar6;
        do {
          uStack_1ca0 = 0x7093d7;
          iVar6 = FUN_006cc9a8(*puVar8);
          if (iVar7 == 1) {
            *(undefined4 *)(iVar6 + 0x1c) = 1;
          }
          *(undefined1 *)(iVar6 + 0x24) = uVar2;
          *(undefined1 *)(iVar6 + 0x26) = uVar3;
          puVar8 = puVar8 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    DAT_00790824 = 0;
  }
  puVar1 = puStack_1c94;
  *in_FS_OFFSET = uStack_1c9c;
  puStack_1c94 = &LAB_00709428;
  puStack_1c98 = (undefined1 *)0x709420;
  thunk_FUN_00406e80(&local_9c84,10,puVar1);
  return;
}
