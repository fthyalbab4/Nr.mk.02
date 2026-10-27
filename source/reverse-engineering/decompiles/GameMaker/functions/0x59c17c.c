// rea decompile_all
// name: FUN_0059c17c
// address: 0x59c17c
// body: available
// range: 0x59c17c-0x59c9fc inclusive
// range: 0x59ca04-0x59ca7e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59c1be (push 0x59ca7f followed by fs-segment stack chaining); handler 0x59ca7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59c227 (push 0x59c9fd followed by fs-segment stack chaining); handler 0x59c9fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059c17c(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int aiStackY_1d1c [1487];
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_584;
  undefined1 *puStack_580;
  undefined1 *puStack_57c;
  undefined4 uStack_578;
  undefined1 *puStack_574;
  undefined1 *puStack_570;
  undefined4 local_560;
  undefined1 *local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined *local_550;
  undefined1 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  int local_540;
  int local_53c [2];
  undefined1 *local_534;
  undefined1 local_52f [1024];
  byte local_12f [115];
  uint *local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  undefined1 *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  ushort local_9c;
  undefined1 local_9a [2];
  int local_98;
  short local_92;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined1 *local_7c;
  uint local_76 [10];
  undefined1 local_4c [36];
  undefined4 local_28;
  undefined1 local_18 [4];
  int local_14;
  short local_a;
  char local_8;

  bVar5 = 0;
  puStack_570 = &stack0xfffffffc;
  local_560 = 0;
  local_558 = 0;
  local_554 = 0;
  local_548 = 0;
  local_544 = 0;
  local_8c = 0;
  puStack_574 = &LAB_0059ca7f;
  uStack_578 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_578;
  puStack_57c = (undefined1 *)0x59c1ca;
  local_28 = param_2;
  FUN_00463a4c(param_1,0);
  puStack_57c = (undefined1 *)0x59c1d2;
  iVar2 = FUN_0043f234(local_28);
  param_1[0x2b] = iVar2;
  puStack_57c = (undefined1 *)0x59c1e7;
  cVar1 = (**(code **)(*param_1 + 0x84))(param_1,local_28,0);
  if (cVar1 == '\0') {
    puStack_57c = (undefined1 *)0x59ca14;
    FUN_0040b75c(PTR_PTR_00781dac,&local_560);
    local_550 = &DAT_0059caa0;
    local_54c = 0x11;
    puStack_57c = (undefined1 *)0x59ca3b;
    FUN_00592d3c(local_560,&local_550,0);
    puVar8 = puStack_570;
    *in_FS_OFFSET = uStack_578;
    puStack_570 = &LAB_0059ca86;
    puStack_574 = (undefined1 *)0x59ca53;
    thunk_FUN_00406e5c(&local_560,uStack_578,puVar8);
    puStack_574 = (undefined1 *)0x59ca63;
    thunk_FUN_00406e80(&local_558,2);
    puStack_574 = (undefined1 *)0x59ca73;
    thunk_FUN_00406e80(&local_548,2);
    puStack_574 = (undefined1 *)0x59ca7e;
    thunk_FUN_00406e5c(&local_8c);
    return;
  }
  puStack_580 = (undefined1 *)param_1[0x2b];
  puStack_57c = (undefined1 *)0x0;
  uStack_584 = 0x59c201;
  FUN_0043f254(local_28);
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_bc = (uint *)(param_1 + 0x11);
  puStack_580 = &LAB_0059c9fd;
  uStack_584 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_584;
  puStack_57c = &stack0xfffffffc;
  FUN_00438c38(0,0,param_1[0x13],&local_540,1);
  piVar6 = param_1 + (uint)bVar5 * -2 + 0x2e;
  param_1[0x2d] = local_540;
  *piVar6 = local_53c[(uint)bVar5 * -2];
  piVar6[(uint)bVar5 * -2 + 1] = local_53c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (piVar6 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (local_53c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  uVar10 = 0;
  uVar9 = 0;
  piVar6 = param_1 + 0x2d;
  FUN_0040b75c(PTR_PTR_007819b8,&local_544);
  FUN_00405d08(param_1,param_1,0,local_544,piVar6,uVar9,uVar10);
  FUN_0043f488(local_28,local_4c,0x24);
  FUN_0059be58();
  local_90 = FUN_0043f234(local_28);
  if (3 < *local_bc) {
    FUN_0043f488(local_28,local_18,4);
  }
  FUN_0043f488(local_28,local_76,0x2a);
  FUN_0043f254(local_28);
  iVar2 = param_1[0x10];
  *(undefined1 *)(iVar2 + 0x140) = 0;
  FUN_0058f110(iVar2,*(undefined1 *)((int)local_bc + 0x11));
  FUN_0058f1f4(iVar2,*(undefined1 *)((int)local_bc + 0x11));
  FUN_0058f18c(iVar2,*(undefined1 *)((int)local_bc + 0x12));
  FUN_0058f270(iVar2,*(undefined1 *)((int)local_bc + 0x12));
  FUN_0058f178(iVar2,(char)local_bc[4]);
  if ((char)local_bc[4] == '\x04') {
    FUN_0058f25c(iVar2,6);
  }
  else {
    FUN_0058f25c(iVar2,(char)local_bc[4]);
  }
  uVar9 = FUN_0058ed00(iVar2,1);
  FUN_00463dc0(param_1,uVar9);
  local_b8 = 0;
  cVar1 = *(char *)((int)local_bc + 0x11);
  if (cVar1 == '\x01') {
    iVar2 = local_76[0] + 7;
    if (iVar2 < 0) {
      iVar2 = local_76[0] + 0xe;
    }
    local_b8 = iVar2 >> 3;
  }
  else if (cVar1 == '\x04') {
    iVar2 = (int)local_76[0] >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_76[0] & 1) != 0);
    }
    local_b8 = iVar2 + 1;
  }
  else if (cVar1 == '\b') {
    local_b8 = local_76[0];
  }
  else {
    FUN_0040b75c(PTR_PTR_00781958,&local_548);
    local_550 = &DAT_0059caa0;
    local_54c = 0x11;
    FUN_00592d3c(local_548,&local_550,0);
  }
  (**(code **)(*param_1 + 0x44))(param_1,local_bc[2]);
  (**(code **)(*param_1 + 0x38))(param_1,local_bc[3]);
  uVar10 = 0;
  uVar9 = 0;
  FUN_00405d08(param_1,param_1,2,0,param_1 + 0x2d,0,0);
  while (cVar1 = FUN_0059be58(), cVar1 != '\0') {
    local_98 = FUN_0043f234(local_28);
    local_98 = local_98 + local_14;
    if (local_8 != '~') break;
    if (local_a == 2) {
      if (3 < *local_bc) {
        FUN_0043f488(local_28,local_18,4);
      }
      FUN_0043f488(local_28,&local_b4,4);
      FUN_0043f488(local_28,local_52f,local_b4 * 4);
      local_55c = local_52f;
      uVar3 = FUN_0058f37c(param_1[0x10],&local_55c,0,1,local_b4,1);
      (**(code **)(*param_1 + 0x3c))(param_1,uVar3);
    }
    else if (local_a == 3) {
      while (puVar8 = &stack0xfffffffc, cVar1 = FUN_0059be58(), cVar1 != '\0') {
        FUN_0040b75c(PTR_PTR_00781824,&local_554,puVar8,param_1 + 0x2d,0,0);
        FUN_00405d08(param_1,param_1,0,local_554);
        FUN_0043f234(local_28);
        if (local_a != 4) break;
        if (*local_bc < 4) {
          FUN_00408244(&local_8c,0x100);
          if ((local_8c != 0) && (*(short *)(local_8c + -10) != 2)) {
            FUN_00407048(&local_8c,local_8c);
          }
          uVar3 = thunk_FUN_004089c0(&local_8c);
          FUN_0043f488(local_28,uVar3,0x100);
          FUN_0043f488(local_28,local_12f,0x73);
          if (local_12f[0] == 0) goto LAB_0059c672;
          FUN_0043f254(local_28);
        }
        else {
          local_90 = FUN_0043f234(local_28);
          FUN_0043f488(local_28,local_18,4);
          FUN_0043f488(local_28,&local_92,2);
          FUN_00408244(&local_8c,local_92);
          if (local_92 != 0) {
            if ((local_8c != 0) && (*(short *)(local_8c + -10) != 2)) {
              FUN_00407048(&local_8c,local_8c);
            }
            uVar3 = thunk_FUN_004089c0(&local_8c);
            FUN_0043f488(local_28,uVar3,local_92);
          }
          FUN_0043f488(local_28,local_12f,0x73);
          FUN_0043f254(local_28);
          if (local_12f[0] < 2) {
            local_90 = FUN_0043f234(local_28);
            FUN_0043f488(local_28,local_18,4);
LAB_0059c672:
            FUN_0043f488(local_28,local_9a,2);
            FUN_0043f488(local_28,&local_9c,2);
            if (3 < local_9c) {
              FUN_0058f25c(param_1[0x10],7);
              FUN_00463dc0(param_1,7);
            }
            if (3 < *local_bc) {
              FUN_0043f254(local_28);
            }
            uVar4 = (uint)local_9c;
            if (-1 < (int)(uVar4 - 1)) {
              do {
                FUN_0059bfec();
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            FUN_00405d08(param_1,param_1,2,0,param_1 + 0x2d,0,0);
            uVar7 = 0;
            uVar3 = 0;
            piVar6 = param_1 + 0x2d;
            FUN_0040b75c(PTR_PTR_00782258,&local_558);
            FUN_00405d08(param_1,param_1,0,local_558,piVar6,uVar3,uVar7);
            local_a0 = local_80;
            local_a4 = local_84;
            local_a8 = local_88;
            local_ac = local_7c;
            if ((byte)(*(char *)(param_1[0x10] + 0x135) - 1U) < 2) {
              uVar4 = local_bc[3];
              if (-1 < (int)(uVar4 - 1)) {
                local_b0 = 0;
                do {
                  uVar3 = FUN_00462be8(param_1,local_b0);
                  local_55c = local_ac;
                  FUN_0058f2d8(param_1[0x10],&local_55c,0,0xff,local_bc[2],uVar3);
                  local_ac = local_ac + local_b8;
                  iVar2 = MulDiv(local_b0,100,local_bc[3]);
                  FUN_00405d08(param_1,param_1,1,0,param_1 + 0x2d,1,iVar2);
                  OffsetRect((LPRECT)(param_1 + 0x2d),0,1);
                  local_b0 = local_b0 + 1;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
            }
            else {
              uVar4 = local_bc[3];
              if (-1 < (int)(uVar4 - 1)) {
                local_b0 = 0;
                do {
                  uVar3 = FUN_00462be8(param_1,local_b0);
                  local_540 = local_a0;
                  local_53c[0] = local_a4;
                  local_53c[1] = local_a8;
                  local_534 = local_ac;
                  FUN_0058f2d8(param_1[0x10],&local_540,3,0xff,local_bc[2],uVar3);
                  local_a0 = local_a0 + local_b8;
                  local_a4 = local_a4 + local_b8;
                  local_a8 = local_a8 + local_b8;
                  local_ac = local_ac + local_b8;
                  iVar2 = MulDiv(local_b0,100,local_bc[3]);
                  FUN_00405d08(param_1,param_1,1,0,param_1 + 0x2d,1,iVar2);
                  OffsetRect((LPRECT)(param_1 + 0x2d),0,1);
                  local_b0 = local_b0 + 1;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
            }
            FUN_00405d08(param_1,param_1,2,0,param_1 + 0x2d,0,0);
            break;
          }
          FUN_0043f254(local_28);
        }
      }
    }
    FUN_0043f254(local_28);
  }
  *in_FS_OFFSET = uVar9;
  if (local_80 != 0) {
    FUN_00404338(local_80,uVar9,uVar10,0x59ca3b);
  }
  if (local_84 != 0) {
    FUN_00404338(local_84);
  }
  if (local_88 != 0) {
    FUN_00404338(local_88);
  }
  return;
}
